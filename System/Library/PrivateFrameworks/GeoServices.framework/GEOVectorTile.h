/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:10 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOFeatureStyleAttributes, NSMutableData, NSData, NSString, NSMutableOrderedSet, NSMutableArray, NSMutableDictionary;

@interface GEOVectorTile : NSObject {

	GEOTileKey _key;
	GEOFeatureStyleAttributes* _attributes;
	SCD_Struct_GE74* _lines;
	unsigned long long _linesCount;
	unsigned long long _linesVertexCount;
	SCD_Struct_GE138* _linesLabelAnnotations;
	unsigned long long _linesLabelAnnotationCount;
	SCD_Struct_GE139* _linesAnnotationBezierVertices;
	SCD_Struct_GE74* _coastlines;
	unsigned long long _coastlinesCount;
	SCD_Struct_GE140* _polygons;
	unsigned long long _polygonsCount;
	unsigned long long _polygonsVertexCount;
	SCD_Struct_GE39* _polygonLabelPositions;
	unsigned long long _polygonLabelPositionsCount;
	unsigned long long _venuesCount;
	SCD_Struct_GE141* _venues;
	unsigned long long _venueSectionsCount;
	unsigned long long _venueBuildingsCount;
	SCD_Struct_GE142* _venueBuildings;
	unsigned long long _venueLevelsCount;
	SCD_Struct_GE143* _venueLevels;
	unsigned long long _venueComponentsCount;
	SCD_Struct_GE144* _venueComponents;
	SCD_Struct_GE107* _buildingFootprints;
	NSMutableData* _extrusionHeightsPool;
	NSMutableData* _baseHeightsPool;
	unsigned long long _buildingFootprintsCount;
	SCD_Struct_GE107* _overlapBuildingFootprints;
	unsigned long long _overlapBuildingFootprintsCount;
	SCD_Struct_GE107* _hiResBuildingFootprints;
	unsigned long long _hiResBuildingFootprintsCount;
	SCD_Struct_GE145* _threeDBuildings;
	unsigned long long _threeDBuildingsCount;
	SCD_Struct_GE145* _overlapThreeDBuildings;
	unsigned long long _overlapThreeDBuildingsCount;
	SCD_Struct_GE40* _pois;
	unsigned long long _poisCount;
	SCD_Struct_GE146* _labelTextPlacements;
	unsigned _labelTextPlacementsCount;
	SCD_Struct_GE147* _overpasses;
	SCD_Struct_GE134* _junctions;
	unsigned long long _junctionsCount;
	BOOL _hasComputedJunctions;
	SCD_Struct_GE148* _laneConnections;
	unsigned long long _laneConnectionsCount;
	SCD_Struct_GE148* _pointsOnRoad;
	unsigned long long _pointsOnRoadCount;
	/*function pointer*/void** _sortedPointsOnRoad;
	SCD_Struct_GE149* _laneGeometry;
	SCD_Struct_GE150* _curveLineVertices;
	unsigned* _curveToLineMapping;
	SCD_Struct_GE139* _lineVertices;
	SCD_Struct_GE139* _polygonVertices;
	SCD_Struct_GE139* _coastlineVertices;
	SCD_Struct_GE139* _footprintVertices;
	SCD_Struct_GE139* _overlapFootprintVertices;
	SCD_Struct_GE139* _hiResFootprintVertices;
	SCD_Struct_GE139* _venuesVertices;
	/*function pointer*/void** _venuesSections;
	NSData* _labelPool;
	SCD_Struct_GE151* _labelPoolLanguages;
	unsigned long long _labelPoolLanguagesLength;
	NSData* _localizedLabelPool;
	NSString* _preferredLocalizedLabelLanguage;
	char* _localizedLabelsLanguage;
	NSData* _dualLanguageLabelPool;
	SCD_Struct_GE152* _labelIndex;
	unsigned long long _labelIndexCount;
	GEOFeatureShield* _shieldIndex;
	unsigned long long _shieldIndexCount;
	SCD_Struct_GE153* _localizationTable;
	unsigned long long _localizationTableCount;
	NSMutableOrderedSet* _uniqueAttributes;
	NSMutableArray* _uniqueFeatureAttributes;
	SCD_Struct_GE156* _lineCharacteristicPoints;
	unsigned long long _lineCharacteristicPointCount;
	SCD_Struct_GE156* _polygonCharacteristicPoints;
	unsigned long long _polygonCharacteristicPointCount;
	SCD_Struct_GE156* _coastlineCharacteristicPoints;
	unsigned long long _coastlineCharacteristicPointCount;
	SCD_Struct_GE148* _lineStrokeSpecifications;
	unsigned long long _lineStrokeSpecificationCount;
	SCD_Struct_GE148* _polygonStrokeSpecifications;
	unsigned long long _polygonStrokeSpecificationCount;
	unsigned long long _tileReferenceCount;
	GEOTileKey* _tileReferences;
	SCD_Struct_GE157* _transitLines;
	unsigned long long _transitLineCount;
	SCD_Struct_GE158* _transitSystems;
	unsigned long long _transitSystemCount;
	SCD_Struct_GE159* _transitLinks;
	unsigned long long _transitLinkCount;
	SCD_Struct_GE160* _transitLinkLineKeys;
	unsigned long long* _transitLinkLineIndices;
	unsigned long long _transitLinkLineIndicesCount;
	SCD_Struct_GE139* _transitVertices;
	GEOTransitNodeFeature* _transitNodes;
	unsigned long long _transitNodeCount;
	unsigned long long* _transitNodeSystemIndices;
	unsigned long long _transitNodeIndexCount;
	SCD_Struct_GE139* _transitStationTransferVertices;
	SCD_Struct_GE161* _transitStationTransfers;
	unsigned long long _transitStationTransferCount;
	SCD_Struct_GE134* _transitJunctions;
	unsigned long long _transitJunctionCount;
	SCD_Struct_GE148* _transitPointsOnRoad;
	unsigned long long _transitPointsOnRoadCount;
	unsigned* _transitTravelTimes;
	float* _transitLinkLineMinZoomOverrides;
	unsigned long long* _transitNodeParentIDs;
	unsigned long long _transitNodeParentIDCount;
	SCD_Struct_GE138* _transitLinkLabelAnnotations;
	unsigned long long _transitLinkLabelAnnotationCount;
	SCD_Struct_GE139* _transitLinkAnnotationBezierVertices;
	unsigned long long* _idsOfTransitNodesNotInTile;
	SCD_Struct_GE162* _transitAccessPoints;
	unsigned long long _transitAccessPointCount;
	SCD_Struct_GE160* _transitNodeLineKeys;
	unsigned long long* _transitNodeLineIndices;
	unsigned long long _transitNodeLineIndicesCount;
	SCD_Struct_GE160* _transitNodeSubtitleLineKeys;
	unsigned long long* _transitNodeSubtitleLineIndices;
	unsigned long long _transitNodeSubtitleLineIndicesCount;
	unsigned long long* _transitShieldIndices;
	unsigned char* _transitLineDirections;
	unsigned long long* _originalTransitNodeIDs;
	unsigned long long* _originalTransitNodeIDPointers;
	SCD_Struct_GE39* _transitLinkSections;
	char _transitCoverage;
	id* _transitNodeStyleAttributes;
	unsigned long long* _hallOrderIDs;
	BOOL* _shouldDrawEndPoint;
	unsigned long long* _transitNodeCollapseIndices;
	unsigned long long _transitNodeCollapseIndexCount;
	unsigned long long* _transitNodeCollapseIDs;
	unsigned long long _transitNodeCollapseIDCount;
	GEOsslpmTileInfo* _sslpmTileInfo;
	unsigned _tileLabelLinesCount;
	GEOTileLabelLine* _tileLabelLines;
	unsigned _labelLineFeatureSectionsCount;
	GEOLabelLineFeatureSection* _labelLineFeatureSections;
	unsigned _labelLineAttributesCount;
	GEOLabelLineAttribute* _labelLineAttributes;
	unsigned _debugByteCount;
	NSMutableDictionary* _debugByteCountPerChapter;

}

@property (nonatomic,readonly) SCD_Struct_GE107* buildingFootprints; 
@property (nonatomic,readonly) SCD_Struct_GE107* overlapBuildingFootprints; 
@property (nonatomic,readonly) SCD_Struct_GE145* threeDBuildings; 
@property (nonatomic,readonly) SCD_Struct_GE145* overlapThreeDBuildings; 
@property (nonatomic,readonly) SCD_Struct_GE74* lines;                                                //@synthesize lines=_lines - In the implementation block
@property (nonatomic,readonly) unsigned long long linesCount;                                         //@synthesize linesCount=_linesCount - In the implementation block
@property (nonatomic,readonly) unsigned long long linesVertexCount;                                   //@synthesize linesVertexCount=_linesVertexCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE138* linesLabelAnnotations;                               //@synthesize linesLabelAnnotations=_linesLabelAnnotations - In the implementation block
@property (nonatomic,readonly) unsigned long long linesLabelAnnotationCount;                          //@synthesize linesLabelAnnotationCount=_linesLabelAnnotationCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE139* linesAnnotationBezierVertices;                       //@synthesize linesAnnotationBezierVertices=_linesAnnotationBezierVertices - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE74* coastlines;                                           //@synthesize coastlines=_coastlines - In the implementation block
@property (nonatomic,readonly) unsigned long long coastlinesCount;                                    //@synthesize coastlinesCount=_coastlinesCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE140* polygons;                                            //@synthesize polygons=_polygons - In the implementation block
@property (nonatomic,readonly) unsigned long long polygonsCount;                                      //@synthesize polygonsCount=_polygonsCount - In the implementation block
@property (nonatomic,readonly) unsigned long long polygonsVertexCount;                                //@synthesize polygonsVertexCount=_polygonsVertexCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE141* venues;                                              //@synthesize venues=_venues - In the implementation block
@property (nonatomic,readonly) unsigned long long venuesCount;                                        //@synthesize venuesCount=_venuesCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE142* venueBuildings;                                      //@synthesize venueBuildings=_venueBuildings - In the implementation block
@property (nonatomic,readonly) unsigned long long venueBuildingsCount;                                //@synthesize venueBuildingsCount=_venueBuildingsCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE139* venueVertices;                                       //@synthesize venuesVertices=_venuesVertices - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void** venueBuildingSections;                      //@synthesize venuesSections=_venuesSections - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE143* venueLevels;                                         //@synthesize venueLevels=_venueLevels - In the implementation block
@property (nonatomic,readonly) unsigned long long venueLevelsCount;                                   //@synthesize venueLevelsCount=_venueLevelsCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE144* venueComponents;                                     //@synthesize venueComponents=_venueComponents - In the implementation block
@property (nonatomic,readonly) unsigned long long venueComponentsCount;                               //@synthesize venueComponentsCount=_venueComponentsCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE107* buildingFootprints;                                  //@synthesize buildingFootprints=_buildingFootprints - In the implementation block
@property (nonatomic,readonly) unsigned long long buildingFootprintsCount; 
@property (nonatomic,readonly) unsigned long long nonOverlappingBuildingFootprintsCount;              //@synthesize buildingFootprintsCount=_buildingFootprintsCount - In the implementation block
@property (nonatomic,readonly) unsigned long long totalBuildingFootprintsCount; 
@property (nonatomic,readonly) unsigned long long nonOverlappingThreeDBuildingsCount;                 //@synthesize threeDBuildingsCount=_threeDBuildingsCount - In the implementation block
@property (nonatomic,readonly) unsigned long long totalThreeDBuildingsCount; 
@property (nonatomic,readonly) SCD_Struct_GE40* pois;                                                 //@synthesize pois=_pois - In the implementation block
@property (nonatomic,readonly) unsigned long long poisCount;                                          //@synthesize poisCount=_poisCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE146* labelTextPlacements;                                 //@synthesize labelTextPlacements=_labelTextPlacements - In the implementation block
@property (nonatomic,readonly) unsigned labelTextPlacementsCount;                                     //@synthesize labelTextPlacementsCount=_labelTextPlacementsCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE147* overpasses;                                          //@synthesize overpasses=_overpasses - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE134* junctions;                                           //@synthesize junctions=_junctions - In the implementation block
@property (nonatomic,readonly) unsigned long long junctionsCount;                                     //@synthesize junctionsCount=_junctionsCount - In the implementation block
@property (nonatomic,readonly) BOOL hasComputedJunctions;                                             //@synthesize hasComputedJunctions=_hasComputedJunctions - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE148* pointsOnRoad;                                        //@synthesize pointsOnRoad=_pointsOnRoad - In the implementation block
@property (nonatomic,readonly) unsigned long long pointsOnRoadCount;                                  //@synthesize pointsOnRoadCount=_pointsOnRoadCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE148* laneConnections;                                     //@synthesize laneConnections=_laneConnections - In the implementation block
@property (nonatomic,readonly) unsigned long long laneConnectionsCount;                               //@synthesize laneConnectionsCount=_laneConnectionsCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE156* lineCharacteristicPoints;                            //@synthesize lineCharacteristicPoints=_lineCharacteristicPoints - In the implementation block
@property (nonatomic,readonly) unsigned long long lineCharacteristicPointCount;                       //@synthesize lineCharacteristicPointCount=_lineCharacteristicPointCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE156* polygonCharacteristicPoints;                         //@synthesize polygonCharacteristicPoints=_polygonCharacteristicPoints - In the implementation block
@property (nonatomic,readonly) unsigned long long polygonCharacteristicPointCount;                    //@synthesize polygonCharacteristicPointCount=_polygonCharacteristicPointCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE156* coastlineCharacteristicPoints;                       //@synthesize coastlineCharacteristicPoints=_coastlineCharacteristicPoints - In the implementation block
@property (nonatomic,readonly) unsigned long long coastlineCharacteristicPointCount;                  //@synthesize coastlineCharacteristicPointCount=_coastlineCharacteristicPointCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE148* lineStrokeSpecifications;                            //@synthesize lineStrokeSpecifications=_lineStrokeSpecifications - In the implementation block
@property (nonatomic,readonly) unsigned long long lineStrokeSpecificationCount;                       //@synthesize lineStrokeSpecificationCount=_lineStrokeSpecificationCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE148* polygonStrokeSpecifications;                         //@synthesize polygonStrokeSpecifications=_polygonStrokeSpecifications - In the implementation block
@property (nonatomic,readonly) unsigned long long polygonStrokeSpecificationCount;                    //@synthesize polygonStrokeSpecificationCount=_polygonStrokeSpecificationCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE150* curveLineVertices; 
@property (nonatomic,readonly) SCD_Struct_GE139* lineVertices; 
@property (nonatomic,readonly) GEOTileKey tileKey;                                                    //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) unsigned long long tileReferenceCount;                                 //@synthesize tileReferenceCount=_tileReferenceCount - In the implementation block
@property (nonatomic,readonly) GEOTileKey* tileReferences;                                            //@synthesize tileReferences=_tileReferences - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE157* transitLines;                                        //@synthesize transitLines=_transitLines - In the implementation block
@property (nonatomic,readonly) unsigned long long transitLineCount;                                   //@synthesize transitLineCount=_transitLineCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE158* transitSystems;                                      //@synthesize transitSystems=_transitSystems - In the implementation block
@property (nonatomic,readonly) unsigned long long transitSystemCount;                                 //@synthesize transitSystemCount=_transitSystemCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE159* transitLinks;                                        //@synthesize transitLinks=_transitLinks - In the implementation block
@property (nonatomic,readonly) unsigned long long transitLinkCount;                                   //@synthesize transitLinkCount=_transitLinkCount - In the implementation block
@property (nonatomic,readonly) unsigned long long* transitLinkLineIndices;                            //@synthesize transitLinkLineIndices=_transitLinkLineIndices - In the implementation block
@property (nonatomic,readonly) unsigned long long transitLinkLineIndicesCount;                        //@synthesize transitLinkLineIndicesCount=_transitLinkLineIndicesCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE139* transitVertices;                                     //@synthesize transitVertices=_transitVertices - In the implementation block
@property (nonatomic,readonly) GEOTransitNodeFeature* transitNodes;                                   //@synthesize transitNodes=_transitNodes - In the implementation block
@property (nonatomic,readonly) unsigned long long transitNodeCount;                                   //@synthesize transitNodeCount=_transitNodeCount - In the implementation block
@property (nonatomic,readonly) unsigned long long* transitNodeSystemIndices;                          //@synthesize transitNodeSystemIndices=_transitNodeSystemIndices - In the implementation block
@property (nonatomic,readonly) unsigned long long transitNodeIndexCount;                              //@synthesize transitNodeIndexCount=_transitNodeIndexCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE139* transitStationTransferVertices;                      //@synthesize transitStationTransferVertices=_transitStationTransferVertices - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE161* transitStationTransfers;                             //@synthesize transitStationTransfers=_transitStationTransfers - In the implementation block
@property (nonatomic,readonly) unsigned long long transitStationTransferCount;                        //@synthesize transitStationTransferCount=_transitStationTransferCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE134* transitJunctions;                                    //@synthesize transitJunctions=_transitJunctions - In the implementation block
@property (nonatomic,readonly) unsigned long long transitJunctionCount;                               //@synthesize transitJunctionCount=_transitJunctionCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE148* transitPointsOnRoad;                                 //@synthesize transitPointsOnRoad=_transitPointsOnRoad - In the implementation block
@property (nonatomic,readonly) unsigned long long transitPointsOnRoadCount;                           //@synthesize transitPointsOnRoadCount=_transitPointsOnRoadCount - In the implementation block
@property (nonatomic,readonly) unsigned* transitTravelTimes;                                          //@synthesize transitTravelTimes=_transitTravelTimes - In the implementation block
@property (nonatomic,readonly) float* transitLinkLineMinZoomOverrides;                                //@synthesize transitLinkLineMinZoomOverrides=_transitLinkLineMinZoomOverrides - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE162* transitAccessPoints;                                 //@synthesize transitAccessPoints=_transitAccessPoints - In the implementation block
@property (nonatomic,readonly) unsigned long long transitAccessPointCount;                            //@synthesize transitAccessPointCount=_transitAccessPointCount - In the implementation block
@property (nonatomic,readonly) unsigned long long* transitNodeLineIndices;                            //@synthesize transitNodeLineIndices=_transitNodeLineIndices - In the implementation block
@property (nonatomic,readonly) unsigned long long* transitNodeSubtitleLineIndices;                    //@synthesize transitNodeSubtitleLineIndices=_transitNodeSubtitleLineIndices - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE138* transitLinkLabelAnnotations;                         //@synthesize transitLinkLabelAnnotations=_transitLinkLabelAnnotations - In the implementation block
@property (nonatomic,readonly) unsigned long long transitLinkLabelAnnotationCount;                    //@synthesize transitLinkLabelAnnotationCount=_transitLinkLabelAnnotationCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE139* transitLinkAnnotationBezierVertices;                 //@synthesize transitLinkAnnotationBezierVertices=_transitLinkAnnotationBezierVertices - In the implementation block
@property (nonatomic,readonly) unsigned long long* transitShieldIndices;                              //@synthesize transitShieldIndices=_transitShieldIndices - In the implementation block
@property (nonatomic,readonly) unsigned char* transitLineDirections;                                  //@synthesize transitLineDirections=_transitLineDirections - In the implementation block
@property (nonatomic,readonly) const SCD_Struct_GE39* transitLinkSections;                            //@synthesize transitLinkSections=_transitLinkSections - In the implementation block
@property (nonatomic,readonly) char transitCoverage;                                                  //@synthesize transitCoverage=_transitCoverage - In the implementation block
@property (nonatomic,readonly) unsigned long long* transitNodeCollapseIndices;                        //@synthesize transitNodeCollapseIndices=_transitNodeCollapseIndices - In the implementation block
@property (nonatomic,readonly) unsigned long long transitNodeCollapseIndexCount;                      //@synthesize transitNodeCollapseIndexCount=_transitNodeCollapseIndexCount - In the implementation block
@property (nonatomic,readonly) unsigned long long* transitNodeCollapseIDs;                            //@synthesize transitNodeCollapseIDs=_transitNodeCollapseIDs - In the implementation block
@property (nonatomic,readonly) unsigned long long transitNodeCollapseIDCount;                         //@synthesize transitNodeCollapseIDCount=_transitNodeCollapseIDCount - In the implementation block
@property (nonatomic,readonly) GEOsslpmTileInfo* sslpmTileInfo;                                       //@synthesize sslpmTileInfo=_sslpmTileInfo - In the implementation block
@property (nonatomic,readonly) unsigned tileLabelLinesCount;                                          //@synthesize tileLabelLinesCount=_tileLabelLinesCount - In the implementation block
@property (nonatomic,readonly) GEOTileLabelLine* tileLabelLines;                                      //@synthesize tileLabelLines=_tileLabelLines - In the implementation block
@property (nonatomic,readonly) unsigned labelLineFeatureSectionsCount;                                //@synthesize labelLineFeatureSectionsCount=_labelLineFeatureSectionsCount - In the implementation block
@property (nonatomic,readonly) GEOLabelLineFeatureSection* labelLineFeatureSections;                  //@synthesize labelLineFeatureSections=_labelLineFeatureSections - In the implementation block
@property (nonatomic,readonly) unsigned labelLineAttributesCount;                                     //@synthesize labelLineAttributesCount=_labelLineAttributesCount - In the implementation block
@property (nonatomic,readonly) GEOLabelLineAttribute* labelLineAttributes;                            //@synthesize labelLineAttributes=_labelLineAttributes - In the implementation block
@property (nonatomic,readonly) unsigned debugByteCount;                                               //@synthesize debugByteCount=_debugByteCount - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * debugByteCountPerChapter;                        //@synthesize debugByteCountPerChapter=_debugByteCountPerChapter - In the implementation block
-(id)description;
-(void)dealloc;
-(unsigned long long)transitLinkCount;
-(SCD_Struct_GE159*)transitLinks;
-(GEOTileKey)tileKey;
-(unsigned long long)transitNodeCount;
-(GEOTransitNodeFeature*)transitNodes;
-(unsigned long long)transitAccessPointCount;
-(SCD_Struct_GE162*)transitAccessPoints;
-(SCD_Struct_GE74*)lines;
-(void)forEachEdgeOnJunction:(const SCD_Struct_GE134*)arg1 visitor:(/*^block*/id)arg2 ;
-(void)forEachEdgeInRoad:(SCD_Struct_GE74*)arg1 visitTwice:(BOOL)arg2 visitor:(/*^block*/id)arg3 ;
-(void)forEachRoad:(/*^block*/id)arg1 ;
-(unsigned long long)totalBuildingFootprintsCount;
-(SCD_Struct_GE139*)transitVertices;
-(unsigned long long)linesCount;
-(void)forEachPoint:(/*^block*/id)arg1 ;
-(void)forEachPolygon:(/*^block*/id)arg1 ;
-(void)forEachTransitLinkOnJunction:(const SCD_Struct_GE134*)arg1 visitor:(/*^block*/id)arg2 ;
-(SCD_Struct_GE148*)transitPointsOnRoad;
-(BOOL)isTooBigToParseTileData:(id)arg1 localizationData:(id)arg2 tileKey:(const GEOTileKey*)arg3 ;
-(id)_initWithVMP4:(id)arg1 localizationData:(id)arg2 tileKey:(const GEOTileKey*)arg3 ;
-(void)_attachRoadPoints;
-(BOOL)_findJunctions;
-(BOOL)_findOverpasses;
-(void)_trimWhitespace;
-(SCD_Struct_GE40*)pois;
-(unsigned long long)poisCount;
-(SCD_Struct_GE140*)polygons;
-(unsigned long long)polygonsCount;
-(SCD_Struct_GE157*)transitLineForFeatureID:(unsigned long long)arg1 ;
-(id)initWithTileData:(id)arg1 localizationData:(id)arg2 tileKey:(const GEOTileKey*)arg3 ;
-(unsigned long long)buildingFootprintsCount;
-(unsigned long long)totalThreeDBuildingsCount;
-(SCD_Struct_GE139*)lineVertices;
-(SCD_Struct_GE150*)curveLineVertices;
-(SCD_Struct_GE148*)pointsOnRoad;
-(/*function pointer*/void**)sortedPointsOnRoad;
-(id)extrusionHeightsPool;
-(id)baseHeightsPool;
-(SCD_Struct_GE39*)polygonLabelPositions;
-(void)forEachJunction:(/*^block*/id)arg1 ;
-(void)forEachJunctionInRoad:(SCD_Struct_GE74*)arg1 visitor:(/*^block*/id)arg2 ;
-(unsigned long long)linesVertexCount;
-(unsigned long long)polygonsVertexCount;
-(SCD_Struct_GE74*)multiSectionFeatureForGeoID:(unsigned long long)arg1 ;
-(GEOTransitNodeFeature*)transitNodeForFeatureID:(unsigned long long)arg1 ;
-(SCD_Struct_GE162*)transitAccessPointForFeatureID:(unsigned long long)arg1 ;
-(SCD_Struct_GE158*)transitSystemInfoForFeatureID:(unsigned long long)arg1 ;
-(GEOTileLabelLine*)tileLabelLineforLabelLineID:(unsigned long long)arg1 ;
-(SCD_Struct_GE138*)linesLabelAnnotations;
-(unsigned long long)linesLabelAnnotationCount;
-(SCD_Struct_GE139*)linesAnnotationBezierVertices;
-(SCD_Struct_GE74*)coastlines;
-(unsigned long long)coastlinesCount;
-(SCD_Struct_GE141*)venues;
-(unsigned long long)venuesCount;
-(SCD_Struct_GE142*)venueBuildings;
-(unsigned long long)venueBuildingsCount;
-(SCD_Struct_GE143*)venueLevels;
-(unsigned long long)venueLevelsCount;
-(SCD_Struct_GE144*)venueComponents;
-(unsigned long long)venueComponentsCount;
-(SCD_Struct_GE139*)venueVertices;
-(/*function pointer*/void**)venueBuildingSections;
-(SCD_Struct_GE107*)buildingFootprints;
-(unsigned long long)nonOverlappingBuildingFootprintsCount;
-(unsigned long long)nonOverlappingThreeDBuildingsCount;
-(SCD_Struct_GE146*)labelTextPlacements;
-(unsigned)labelTextPlacementsCount;
-(SCD_Struct_GE147*)overpasses;
-(SCD_Struct_GE134*)junctions;
-(unsigned long long)junctionsCount;
-(BOOL)hasComputedJunctions;
-(unsigned long long)pointsOnRoadCount;
-(SCD_Struct_GE148*)laneConnections;
-(unsigned long long)laneConnectionsCount;
-(SCD_Struct_GE156*)lineCharacteristicPoints;
-(unsigned long long)lineCharacteristicPointCount;
-(SCD_Struct_GE156*)polygonCharacteristicPoints;
-(unsigned long long)polygonCharacteristicPointCount;
-(SCD_Struct_GE156*)coastlineCharacteristicPoints;
-(unsigned long long)coastlineCharacteristicPointCount;
-(SCD_Struct_GE148*)lineStrokeSpecifications;
-(unsigned long long)lineStrokeSpecificationCount;
-(SCD_Struct_GE148*)polygonStrokeSpecifications;
-(unsigned long long)polygonStrokeSpecificationCount;
-(unsigned long long)tileReferenceCount;
-(GEOTileKey*)tileReferences;
-(SCD_Struct_GE157*)transitLines;
-(unsigned long long)transitLineCount;
-(SCD_Struct_GE158*)transitSystems;
-(unsigned long long)transitSystemCount;
-(unsigned long long*)transitLinkLineIndices;
-(unsigned long long)transitLinkLineIndicesCount;
-(unsigned long long*)transitNodeSystemIndices;
-(unsigned long long)transitNodeIndexCount;
-(SCD_Struct_GE139*)transitStationTransferVertices;
-(SCD_Struct_GE161*)transitStationTransfers;
-(unsigned long long)transitStationTransferCount;
-(SCD_Struct_GE134*)transitJunctions;
-(unsigned long long)transitJunctionCount;
-(unsigned long long)transitPointsOnRoadCount;
-(unsigned*)transitTravelTimes;
-(float*)transitLinkLineMinZoomOverrides;
-(unsigned long long*)transitNodeLineIndices;
-(unsigned long long*)transitNodeSubtitleLineIndices;
-(SCD_Struct_GE138*)transitLinkLabelAnnotations;
-(unsigned long long)transitLinkLabelAnnotationCount;
-(SCD_Struct_GE139*)transitLinkAnnotationBezierVertices;
-(unsigned long long*)transitShieldIndices;
-(unsigned char*)transitLineDirections;
-(const SCD_Struct_GE39*)transitLinkSections;
-(char)transitCoverage;
-(unsigned long long*)transitNodeCollapseIndices;
-(unsigned long long)transitNodeCollapseIndexCount;
-(unsigned long long*)transitNodeCollapseIDs;
-(unsigned long long)transitNodeCollapseIDCount;
-(GEOsslpmTileInfo*)sslpmTileInfo;
-(unsigned)tileLabelLinesCount;
-(GEOTileLabelLine*)tileLabelLines;
-(unsigned)labelLineFeatureSectionsCount;
-(GEOLabelLineFeatureSection*)labelLineFeatureSections;
-(unsigned)labelLineAttributesCount;
-(GEOLabelLineAttribute*)labelLineAttributes;
-(unsigned)debugByteCount;
-(NSMutableDictionary *)debugByteCountPerChapter;
-(SCD_Struct_GE107*)overlapBuildingFootprints;
-(SCD_Struct_GE145*)threeDBuildings;
-(SCD_Struct_GE145*)overlapThreeDBuildings;
-(BOOL)_populateTransitConnectivity;
-(BOOL)_readLabelLocalizations:(SCD_Struct_GE164*)arg1 ;
-(BOOL)_makeSpaceForLabels:(unsigned long long)arg1 currentOffset:(unsigned long long*)arg2 ;
-(BOOL)_makeSpaceForShields:(unsigned long long)arg1 currentOffset:(unsigned long long*)arg2 ;
-(id)addAttributes:(id)arg1 toUniqueAttributeSet:(id)arg2 ;
-(BOOL)_readPolygons:(SCD_Struct_GE164*)arg1 ofType:(unsigned short)arg2 ;
-(BOOL)_readLowResBuildings:(SCD_Struct_GE164*)arg1 ;
-(BOOL)_readWrappingCoastlines:(SCD_Struct_GE166*)arg1 tile:(SCD_Struct_GE164*)arg2 ;
-(BOOL)_readSimpleCoastlines:(SCD_Struct_GE166*)arg1 tile:(SCD_Struct_GE164*)arg2 ;
-(BOOL)_readChapter3DBuildings:(SCD_Struct_GE164*)arg1 chapter:(unsigned short)arg2 buildingFeatures:(/*function pointer*/void**)arg3 count:(unsigned long long*)arg4 ;
-(BOOL)_readModernBuildings:(SCD_Struct_GE164*)arg1 chapter:(unsigned short)arg2 vertexPool:(/*function pointer*/void**)arg3 footprints:(/*function pointer*/void**)arg4 count:(unsigned long long*)arg5 ;
-(BOOL)_readTransitSystemsChapterIDSet:(SCD_Struct_GE165*)arg1 featureCount:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)_readTransitSystemsChapterLabelSet:(SCD_Struct_GE165*)arg1 featureCount:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)_convertTransitLineKeys:(/*function pointer*/void**)arg1 countKeys:(unsigned long long)arg2 lineIndices:(unsigned long long*)arg3 ;
-(BOOL)_decodeTransitLabelsFromStream:(SCD_Struct_GE165*)arg1 count:(unsigned long long)arg2 firstFeature:(SCD_Struct_GE38*)arg3 featureStride:(unsigned long long)arg4 ;
-(BOOL)_decodeLabelTextPlacementsFromStream:(SCD_Struct_GE165*)arg1 count:(unsigned long long)arg2 firstFeature:(SCD_Struct_GE40*)arg3 featureStride:(unsigned long long)arg4 tilePrecision:(unsigned char)arg5 ;
-(BOOL)_readConnectivity:(SCD_Struct_GE164*)arg1 ;
-(BOOL)_addGenericPolygonWithAttributes:(int*)arg1 ;
-(BOOL)_handleGenericTile:(SCD_Struct_GE164*)arg1 ;
-(BOOL)_readInfoChapter:(SCD_Struct_GE164*)arg1 key:(const GEOTileKey*)arg2 ;
-(BOOL)_readLabels:(SCD_Struct_GE164*)arg1 ;
-(BOOL)_readPois:(SCD_Struct_GE164*)arg1 ;
-(BOOL)_readLines:(SCD_Struct_GE164*)arg1 ;
-(BOOL)_readPolygons:(SCD_Struct_GE164*)arg1 ;
-(BOOL)_readVenues:(SCD_Struct_GE164*)arg1 key:(const GEOTileKey*)arg2 ;
-(BOOL)_readCoastlines:(SCD_Struct_GE164*)arg1 ;
-(BOOL)_read3DBuildings:(SCD_Struct_GE164*)arg1 ;
-(BOOL)_readBorder3DBuildings:(SCD_Struct_GE164*)arg1 ;
-(BOOL)_readLowResBorderBuildings:(SCD_Struct_GE164*)arg1 ;
-(BOOL)_readHighResBuildings:(SCD_Struct_GE164*)arg1 ;
-(BOOL)_readTileReferences:(SCD_Struct_GE164*)arg1 key:(const GEOTileKey*)arg2 ;
-(BOOL)_readTransitNetwork:(SCD_Struct_GE164*)arg1 key:(const GEOTileKey*)arg2 ;
-(BOOL)_readTransitSystems:(SCD_Struct_GE164*)arg1 key:(const GEOTileKey*)arg2 ;
-(BOOL)_populateTransitNodeStyleAttributes;
-(BOOL)_readTransitMZROverride:(SCD_Struct_GE164*)arg1 ;
-(BOOL)_readVenueMZROverride:(SCD_Struct_GE164*)arg1 ;
-(BOOL)_readCoverage:(SCD_Struct_GE164*)arg1 ;
-(BOOL)_readLabelPlacementMetadata:(SCD_Struct_GE164*)arg1 ;
-(BOOL)_readLabelAnnotations:(SCD_Struct_GE164*)arg1 key:(const GEOTileKey*)arg2 forLines:(BOOL)arg3 ;
-(BOOL)_readRoadNetwork:(SCD_Struct_GE164*)arg1 key:(const GEOTileKey*)arg2 ;
@end

