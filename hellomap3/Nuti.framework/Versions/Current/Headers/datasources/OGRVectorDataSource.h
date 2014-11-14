#ifndef _NUTI_OGRVECTORDATASOURCE_H_
#define _NUTI_OGRVECTORDATASOURCE_H_

#ifdef _NUTI_GDAL_SUPPORT

#include "VectorDataSource.h"

#include <vector>

class OGRLayer;
class OGRDataSource;
class OGRSpatialReference;
class OGRCoordinateTransformation;

namespace Nuti {
	class StyleSelector;
	class ViewState;
	class GeometrySimplifier;

	/**
	 * High-level vector element data source that supports various OGR data formats.
	 * Shapefiles, GeoJSON, KML files can be used using this data source.
	 */
	class OGRVectorDataSource : public VectorDataSource {
	public:
		/**
		 * Constructs a new OGR data source given style selector and OGR supported data file.
		 * If data file contains multiple layers, all layers will be used.
		 * @param projection The projection to use for data coordinates. Note that if actual data is in different coordinates, coordinates will be re-projected.
		 * @param styleSelector The style selector to use when loading geometry from OGR file.
		 * @param fileName The full path of the data file
		 */
		OGRVectorDataSource(const std::shared_ptr<Projection>& projection, const std::shared_ptr<StyleSelector>& styleSelector, const std::string& fileName);

		/**
		 * Constructs a new OGR data source given style selector, data file and layer name.
		 * @param projection The projection to use for data coordinates. Note that if actual data is in different coordinates, coordinates will be re-projected.
		 * @param styleSelector The style selector to use when loading geometry from OGR file.
		 * @param fileName The full path of the data file
		 * @param layerName The name of the layer to use.
		 */
		OGRVectorDataSource(const std::shared_ptr<Projection>& projection, const std::shared_ptr<StyleSelector>& styleSelector, const std::string& fileName, const std::string& layerName);
		virtual ~OGRVectorDataSource();

		/**
		 * Returns the active geometry simplifier of the data source.
		 * @return The current geometry simplifier (can be null)
		 */
		const std::shared_ptr<GeometrySimplifier>& getGeometrySimplifier() const;
		/**
		 * Attaches geometry simplifier to the data source. If the specified simplifier is null, detaches any active simplifier.
		 * @param simplifier The new geometry simplifier to use (can be null).
		 */
		void setGeometrySimplifier(const std::shared_ptr<GeometrySimplifier>& simplifier);

		virtual std::vector<std::shared_ptr<VectorElement> > loadElements(const std::shared_ptr<CullState>& cullState);

	private:
		struct LayerSpatialReference;

		void createFeatures(const ViewState& viewState, long long id, const std::shared_ptr<Geometry>& geometry, const std::map<std::string, std::string>& metaData, std::vector<std::shared_ptr<VectorElement> >& elements) const;

		std::shared_ptr<StyleSelector> _styleSelector;
		std::shared_ptr<GeometrySimplifier> _geometrySimplifier;
		OGRDataSource* _poDS;
		std::vector<OGRLayer*> _poLayers;
		std::map<OGRLayer*, std::shared_ptr<LayerSpatialReference> > _poLayerSpatialReferenceMap;
	};
}

#endif

#endif