/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFeature.h>
#import <CoreImage/NSSecureCoding.h>
#import <CoreImage/NSCopying.h>

@class CIQRCodeDescriptor, NSString;

@interface CIQRCodeFeature : CIFeature <NSSecureCoding, NSCopying> {

	CGRect bounds;
	CGPoint topLeft;
	CGPoint topRight;
	CGPoint bottomLeft;
	CGPoint bottomRight;
	CIQRCodeDescriptor* symbolDescriptor;

}

@property (readonly) CGRect bounds; 
@property (readonly) CGPoint topLeft; 
@property (readonly) CGPoint topRight; 
@property (readonly) CGPoint bottomLeft; 
@property (readonly) CGPoint bottomRight; 
@property (readonly) NSString * messageString; 
@property (readonly) CIQRCodeDescriptor * symbolDescriptor; 
+(BOOL)supportsSecureCoding;
+(id)featureWithInternalRepresentation:(SCD_Struct_CI23*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGPoint)topLeft;
-(CGPoint)bottomLeft;
-(CGPoint)bottomRight;
-(CGPoint)topRight;
-(CGRect)bounds;
-(id)initWithInternalRepresentation:(SCD_Struct_CI23*)arg1 ;
-(NSString *)messageString;
-(CIQRCodeDescriptor *)symbolDescriptor;
@end
