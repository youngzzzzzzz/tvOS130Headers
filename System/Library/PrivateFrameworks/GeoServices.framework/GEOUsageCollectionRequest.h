/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <GeoServices/NSCopying.h>

@class PBDataReader, NSMutableArray, GEOABExperimentAssignment;

@interface GEOUsageCollectionRequest : PBRequest <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE18 _readerMark;
	NSMutableArray* _abExperimentAssignments;
	GEOABExperimentAssignment* _tilesAbExperimentAssignment;
	NSMutableArray* _timeToLeaveHypothesisFeedbackCollections;
	NSMutableArray* _timeToLeaveInitialTravelTimeFeedbackCollections;
	struct {
		unsigned read_abExperimentAssignments : 1;
		unsigned read_tilesAbExperimentAssignment : 1;
		unsigned read_timeToLeaveHypothesisFeedbackCollections : 1;
		unsigned read_timeToLeaveInitialTravelTimeFeedbackCollections : 1;
		unsigned wrote_abExperimentAssignments : 1;
		unsigned wrote_tilesAbExperimentAssignment : 1;
		unsigned wrote_timeToLeaveHypothesisFeedbackCollections : 1;
		unsigned wrote_timeToLeaveInitialTravelTimeFeedbackCollections : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * abExperimentAssignments; 
@property (nonatomic,retain) NSMutableArray * timeToLeaveHypothesisFeedbackCollections; 
@property (nonatomic,retain) NSMutableArray * timeToLeaveInitialTravelTimeFeedbackCollections; 
@property (nonatomic,readonly) BOOL hasTilesAbExperimentAssignment; 
@property (nonatomic,retain) GEOABExperimentAssignment * tilesAbExperimentAssignment; 
+(BOOL)isValid:(id)arg1 ;
+(Class)abExperimentAssignmentType;
+(Class)timeToLeaveHypothesisFeedbackCollectionType;
+(Class)timeToLeaveInitialTravelTimeFeedbackCollectionType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)_readAbExperimentAssignments;
-(void)_addNoFlagsAbExperimentAssignment:(id)arg1 ;
-(void)_readTimeToLeaveHypothesisFeedbackCollections;
-(void)_addNoFlagsTimeToLeaveHypothesisFeedbackCollection:(id)arg1 ;
-(void)_readTimeToLeaveInitialTravelTimeFeedbackCollections;
-(void)_addNoFlagsTimeToLeaveInitialTravelTimeFeedbackCollection:(id)arg1 ;
-(void)_readTilesAbExperimentAssignment;
-(GEOABExperimentAssignment *)tilesAbExperimentAssignment;
-(unsigned long long)abExperimentAssignmentsCount;
-(void)clearAbExperimentAssignments;
-(id)abExperimentAssignmentAtIndex:(unsigned long long)arg1 ;
-(void)addAbExperimentAssignment:(id)arg1 ;
-(unsigned long long)timeToLeaveHypothesisFeedbackCollectionsCount;
-(void)clearTimeToLeaveHypothesisFeedbackCollections;
-(id)timeToLeaveHypothesisFeedbackCollectionAtIndex:(unsigned long long)arg1 ;
-(void)addTimeToLeaveHypothesisFeedbackCollection:(id)arg1 ;
-(unsigned long long)timeToLeaveInitialTravelTimeFeedbackCollectionsCount;
-(void)clearTimeToLeaveInitialTravelTimeFeedbackCollections;
-(id)timeToLeaveInitialTravelTimeFeedbackCollectionAtIndex:(unsigned long long)arg1 ;
-(void)addTimeToLeaveInitialTravelTimeFeedbackCollection:(id)arg1 ;
-(void)setTilesAbExperimentAssignment:(GEOABExperimentAssignment *)arg1 ;
-(NSMutableArray *)abExperimentAssignments;
-(void)setAbExperimentAssignments:(NSMutableArray *)arg1 ;
-(NSMutableArray *)timeToLeaveHypothesisFeedbackCollections;
-(void)setTimeToLeaveHypothesisFeedbackCollections:(NSMutableArray *)arg1 ;
-(NSMutableArray *)timeToLeaveInitialTravelTimeFeedbackCollections;
-(void)setTimeToLeaveInitialTravelTimeFeedbackCollections:(NSMutableArray *)arg1 ;
-(BOOL)hasTilesAbExperimentAssignment;
@end

