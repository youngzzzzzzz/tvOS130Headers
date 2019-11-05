/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class PBDataReader, NSString, GEOLatLng;

@interface GEOTransitAppLaunchFeedbackCollection : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE18 _readerMark;
	NSString* _bundleIdentifier;
	GEOLatLng* _destination;
	GEOLatLng* _source;
	double _timestamp;
	struct {
		unsigned has_timestamp : 1;
		unsigned read_bundleIdentifier : 1;
		unsigned read_destination : 1;
		unsigned read_source : 1;
		unsigned wrote_bundleIdentifier : 1;
		unsigned wrote_destination : 1;
		unsigned wrote_source : 1;
		unsigned wrote_timestamp : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasBundleIdentifier; 
@property (nonatomic,retain) NSString * bundleIdentifier; 
@property (nonatomic,readonly) BOOL hasSource; 
@property (nonatomic,retain) GEOLatLng * source; 
@property (nonatomic,readonly) BOOL hasDestination; 
@property (nonatomic,retain) GEOLatLng * destination; 
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setSource:(GEOLatLng *)arg1 ;
-(GEOLatLng *)source;
-(NSString *)bundleIdentifier;
-(id)dictionaryRepresentation;
-(double)timestamp;
-(void)setDestination:(GEOLatLng *)arg1 ;
-(GEOLatLng *)destination;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasSource;
-(void)_readSource;
-(void)readAll:(BOOL)arg1 ;
-(void)_readDestination;
-(BOOL)hasDestination;
-(void)_readBundleIdentifier;
-(BOOL)hasBundleIdentifier;
@end
