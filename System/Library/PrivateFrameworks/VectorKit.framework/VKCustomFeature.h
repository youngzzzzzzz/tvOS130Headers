/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/NSSecureCoding.h>

@protocol VKCustomFeatureDataSource;
@interface VKCustomFeature : NSObject <NSSecureCoding> {

	shared_ptr<md::LabelExternalPointFeature>* _feature;
	id<VKCustomFeatureDataSource> _dataSource;

}
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(shared_ptr<md::LabelExternalPointFeature>*)feature;
-(id)dataSource;
-(void)setDataSource:(id)arg1 ;
-(id)styleAttributes;
-(void)setStyleAttributes:(id)arg1 ;
-(void)setBusinessID:(unsigned long long)arg1 ;
-(void)setMinZoom:(float)arg1 ;
-(id)initWithCoordinate:(CGSize)arg1 ;
-(unsigned long long)businessID;
-(void)setMaxZoom:(float)arg1 ;
-(unsigned long long)venueID;
-(unsigned long long)featureID;
-(void)setSortKey:(int)arg1 ;
-(unsigned long long)venueBuildingID;
-(unsigned long long)venueLevelID;
-(unsigned long long)venueComponentID;
-(short)venueFloorOrdinal;
-(id)_initWithCoordinate:(SCD_Struct_VK52)arg1 isInjected:(BOOL)arg2 ;
-(id)initWithCoordinate:(CGSize)arg1 elevation:(double)arg2 ;
-(void)setFeatureID:(unsigned long long)arg1 ;
-(void)setVenueID:(unsigned long long)arg1 ;
-(void)setVenueLevelID:(unsigned long long)arg1 ;
-(void)setVenueComponentID:(unsigned long long)arg1 ;
-(void)setVenueFloorOrdinal:(short)arg1 ;
-(void)setTextDisplayMode:(unsigned char)arg1 ;
-(id)_initInternalFeatureWithCoordinate:(CGSize)arg1 ;
-(void)setVenueBuildingID:(unsigned long long)arg1 ;
-(void)setText:(id)arg1 locale:(id)arg2 ;
-(void)setAnnotationText:(id)arg1 locale:(id)arg2 ;
-(void)setPlaceholderIconWithSize:(CGSize)arg1 anchorPoint:(CGPoint)arg2 isRound:(BOOL)arg3 ;
-(BOOL)isInjectedFeature;
@end
