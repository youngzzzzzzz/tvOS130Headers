/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/NSSecureCoding.h>

@class GEOSearchAttributionSource, NSArray, NSString;

@interface GEOSearchAttributionInfo : NSObject <NSSecureCoding> {

	GEOSearchAttributionSource* _source;
	NSArray* _logoPaths;
	NSArray* _snippetLogoPaths;
	NSString* _displayName;
	unsigned _attributionRequirementsMask;

}

@property (nonatomic,readonly) GEOSearchAttributionSource * source;              //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) unsigned version; 
@property (nonatomic,readonly) unsigned requirementsMask;                        //@synthesize attributionRequirementsMask=_attributionRequirementsMask - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                           //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) BOOL shouldOpenInAppStore; 
@property (nonatomic,readonly) NSString * webBaseActionURL; 
@property (nonatomic,readonly) NSArray * attributionApps; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(GEOSearchAttributionSource *)source;
-(unsigned)version;
-(id)dictionaryRepresentation;
-(NSString *)displayName;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSArray *)attributionApps;
-(BOOL)hasAttributionRequirement:(int)arg1 ;
-(id)logoPathForScale:(double)arg1 ;
-(NSString *)webBaseActionURL;
-(unsigned)requirementsMask;
-(id)initWithSource:(id)arg1 localizedAttribution:(id)arg2 logoPaths:(id)arg3 snippetLogoPaths:(id)arg4 ;
-(BOOL)shouldOpenInAppStore;
-(BOOL)supportsActionURLs;
-(id)snippetLogoPathForScale:(double)arg1 ;
-(void)addLogoPath:(id)arg1 ;
@end
