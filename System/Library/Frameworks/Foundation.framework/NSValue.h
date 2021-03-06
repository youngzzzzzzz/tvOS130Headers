/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:37 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/BSXPCSecureCoding.h>
#import <Foundation/NSCopying.h>
#import <Foundation/NSSecureCoding.h>

@class NSString;

@interface NSValue : NSObject <BSXPCSecureCoding, NSCopying, NSSecureCoding>

@property (readonly) CLLocationCoordinate2D MKCoordinateValue; 
@property (readonly) SCD_Struct_NS63 MKCoordinateSpanValue; 
@property (nonatomic,readonly) CGPoint CGPointValue; 
@property (nonatomic,readonly) CGVector CGVectorValue; 
@property (nonatomic,readonly) CGSize CGSizeValue; 
@property (nonatomic,readonly) CGRect CGRectValue; 
@property (nonatomic,readonly) CGAffineTransform CGAffineTransformValue; 
@property (nonatomic,readonly) UIEdgeInsets UIEdgeInsetsValue; 
@property (nonatomic,readonly) NSDirectionalEdgeInsets directionalEdgeInsetsValue; 
@property (nonatomic,readonly) UIOffset UIOffsetValue; 
@property (readonly) SCD_Struct_NS64 UIKBHandwritingPointValue; 
@property (nonatomic,readonly) CGPoint AXMPointValue; 
@property (nonatomic,readonly) CGVector AXMVectorValue; 
@property (nonatomic,readonly) CGSize AXMSizeValue; 
@property (nonatomic,readonly) CGRect AXMRectValue; 
@property (nonatomic,readonly) CGAffineTransform AXMAffineTransformValue; 
@property (readonly) MSVSignedRange signedRangeValue; 
@property (readonly) CATransform3D CATransform3DValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) const char* objCType; 
+(id)_mapkit_valueWithCGPoint:(CGPoint)arg1 ;
+(id)valueWithMKCoordinate:(CLLocationCoordinate2D)arg1 ;
+(id)valueWithMKCoordinateSpan:(SCD_Struct_NS63)arg1 ;
+(id)_mapkit_valueWithCGAffineTransform:(CGAffineTransform)arg1 ;
+(id)_CRValueWithSize:(CGSize)arg1 ;
+(id)valueWithML3NameOrder:(timespec)arg1 ;
+(id)valueWithCGPoint:(CGPoint)arg1 ;
+(id)valueWithCGAffineTransform:(CGAffineTransform)arg1 ;
+(id)valueWithUIEdgeInsets:(UIEdgeInsets)arg1 ;
+(id)valueWithCGRect:(CGRect)arg1 ;
+(id)valueWithCGSize:(CGSize)arg1 ;
+(id)valueWithUIOffset:(UIOffset)arg1 ;
+(id)valueWithDirectionalEdgeInsets:(NSDirectionalEdgeInsets)arg1 ;
+(id)valueWithCGVector:(CGVector)arg1 ;
+(id)valueWithNSDirectionalEdgeInsets:(NSDirectionalEdgeInsets)arg1 ;
+(id)valueWithUIKBHandwritingPoint:(SCD_Struct_NS64)arg1 ;
+(id)_web_valueWithCGRect:(CGRect)arg1 ;
+(id)valueWithCGPoint:(CGPoint)arg1 ;
+(id)axValueWithCGPoint:(CGPoint)arg1 ;
+(id)axValueWithCGSize:(CGSize)arg1 ;
+(id)axValueWithCGRect:(CGRect)arg1 ;
+(id)axmValueWithCGRect:(CGRect)arg1 ;
+(id)axmValueWithCGAffineTransform:(CGAffineTransform)arg1 ;
+(id)axmValueWithCGPoint:(CGPoint)arg1 ;
+(id)axmValueWithCGVector:(CGVector)arg1 ;
+(id)axmValueWithCGSize:(CGSize)arg1 ;
+(id)_geo_valueWithGEOPlaceDataComponentKey:(_GEOPlaceDataComponentKey)arg1 ;
+(id)valueWithMSVSignedRange:(MSVSignedRange)arg1 ;
+(id)valueWithCMTime:(SCD_Struct_NS15)arg1 ;
+(id)valueWithCMTimeRange:(SCD_Struct_NS16)arg1 ;
+(id)valueWithCMTimeMapping:(SCD_Struct_NS17)arg1 ;
+(id)valueWithCATransform3D:(CATransform3D)arg1 ;
+(id)valueWithCAPoint3D:(CAPoint3D)arg1 ;
+(id)valueWithCAColorMatrix:(CAColorMatrix)arg1 ;
+(id)bs_valueWithCGPoint:(CGPoint)arg1 ;
+(id)bs_valueWithCGSize:(CGSize)arg1 ;
+(id)bs_valueWithCGRect:(CGRect)arg1 ;
+(id)bs_valueWithCGAffineTransform:(CGAffineTransform)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)valueWithRange:(NSRange)arg1 ;
+(id)valueWithPoint:(CGPoint)arg1 ;
+(id)valueWithRect:(CGRect)arg1 ;
+(id)valueWithSize:(CGSize)arg1 ;
+(id)valueWithBytes:(const void*)arg1 objCType:(const char*)arg2 ;
+(id)value:(const void*)arg1 withObjCType:(const char*)arg2 ;
+(id)valueWithNonretainedObject:(id)arg1 ;
+(id)valueWithWeakObject:(id)arg1 ;
+(id)valueWithPointer:(const void*)arg1 ;
+(id)valueWithEdgeInsets:(NSEdgeInsets)arg1 ;
-(CLLocationCoordinate2D)MKCoordinateValue;
-(id)_mapkit_initWithCGPoint:(CGPoint)arg1 ;
-(id)_mapkit_initWithCADoublePoint:(CGPoint)arg1 ;
-(CGPoint)CADoublePointValue;
-(id)_mapkit_initWithCADoubleRect:(CGRect)arg1 ;
-(CGRect)CADoubleRectValue;
-(id)_mapkit_initWithCGRect:(CGRect)arg1 ;
-(id)_mapkit_initWithZoomRegion:(SCD_Struct_NS65)arg1 ;
-(SCD_Struct_NS65)_mapkit_zoomRegionValue;
-(id)_mapkit_initWithMKMapRect:(SCD_Struct_NS66)arg1 ;
-(SCD_Struct_NS66)MKMapRectValue;
-(SCD_Struct_NS63)MKCoordinateSpanValue;
-(CGRect)_mapkit_CGRectValue;
-(CGPoint)_mapkit_CGPointValue;
-(CGAffineTransform)_mapkit_CGAffineTransformValue;
-(id)cplFullDescription;
-(id)initWithCPLArchiver:(id)arg1 ;
-(id)plistArchiveWithCPLArchiver:(id)arg1 ;
-(timespec)ML3NameOrderValue;
-(CGRect)CGRectValue;
-(CGPoint)CGPointValue;
-(CGAffineTransform)CGAffineTransformValue;
-(CGSize)CGSizeValue;
-(UIEdgeInsets)UIEdgeInsetsValue;
-(UIOffset)UIOffsetValue;
-(CGVector)CGVectorValue;
-(NSDirectionalEdgeInsets)directionalEdgeInsetsValue;
-(SCD_Struct_NS64)UIKBHandwritingPointValue;
-(CGRect)CGRectValue;
-(CGPoint)CGPointValue;
-(CGPoint)axCGPointValue;
-(CGSize)axCGSizeValue;
-(CGRect)axCGRectValue;
-(CGRect)AXMRectValue;
-(CGPoint)AXMPointValue;
-(CGVector)AXMVectorValue;
-(CGSize)AXMSizeValue;
-(CGAffineTransform)AXMAffineTransformValue;
-(_GEOPlaceDataComponentKey)_geo_GEOPlaceDataComponentKeyValue;
-(MSVSignedRange)signedRangeValue;
-(CGSize)CGSizeValue;
-(SCD_Struct_NS16)CMTimeRangeValue;
-(SCD_Struct_NS15)CMTimeValue;
-(SCD_Struct_NS17)CMTimeMappingValue;
-(CATransform3D)CATransform3DValue;
-(CGAffineTransform)CA_CGAffineTransformValue;
-(CAColorMatrix)CAColorMatrixValue;
-(CAPoint3D)CAPoint3DValue;
-(Object*)CA_copyRenderValue;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2 ;
-(id)CA_interpolateValues:(id)arg1 :(id)arg2 :(id)arg3 interpolator:(const ValueInterpolator*)arg4 ;
-(double)CA_distanceToValue:(id)arg1 ;
-(id)CAMLType;
-(unsigned long long)CA_copyNumericValue:(double)arg1 ;
-(id)CA_addValue:(id)arg1 multipliedBy:(int)arg2 ;
-(id)CA_roundToIntegerFromValue:(id)arg1 ;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(BOOL)supportsBSXPCSecureCoding;
-(CGPoint)bs_CGPointValue;
-(CGSize)bs_CGSizeValue;
-(CGRect)bs_CGRectValue;
-(CGAffineTransform)bs_CGAffineTransformValue;
-(BOOL)bs_getValue:(out void*)arg1 ofSize:(unsigned long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(const char*)objCType;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(void)getValue:(void*)arg1 ;
-(BOOL)isNSValue__;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(NSRange)rangeValue;
-(CGPoint)pointValue;
-(CGRect)rectValue;
-(CGSize)sizeValue;
-(void)getValue:(void*)arg1 size:(unsigned long long)arg2 ;
-(BOOL)_matchType:(const char*)arg1 size:(unsigned long long)arg2 strict:(BOOL)arg3 ;
-(BOOL)isEqualToValue:(id)arg1 ;
-(id)nonretainedObjectValue;
-(id)weakObjectValue;
-(BOOL)_matchType:(const char*)arg1 size:(unsigned long long)arg2 ;
-(void*)pointerValue;
-(NSEdgeInsets)edgeInsetsValue;
-(id)initWithBytes:(const void*)arg1 objCType:(const char*)arg2 ;
@end

