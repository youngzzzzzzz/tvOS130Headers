/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:38 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class NSString, GEOFeatureStyleAttributes;

@interface VKFeatureMarker : NSObject {

	shared_ptr<md::FeatureMarker>* _actualFeatureMarker;

}

@property (readonly) const shared_ptr<md::FeatureMarker>* actualFeatureMarker; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * shortName; 
@property (nonatomic,readonly) unsigned long long featureID; 
@property (nonatomic,readonly) unsigned long long venueID; 
@property (nonatomic,readonly) GEOFeatureStyleAttributes * styleAttributes; 
+(id)markerWithFeatureMarker:(const shared_ptr<md::FeatureMarker>*)arg1 ;
-(NSString *)name;
-(void)dealloc;
-(GEOFeatureStyleAttributes *)styleAttributes;
-(unsigned long long)venueID;
-(NSString *)shortName;
-(unsigned long long)featureID;
-(id)initWithFeatureMarkerPtr:(const shared_ptr<md::FeatureMarker>*)arg1 ;
-(const shared_ptr<md::FeatureMarker>*)actualFeatureMarker;
@end

