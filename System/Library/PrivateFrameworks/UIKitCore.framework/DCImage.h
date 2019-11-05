/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:05 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSData;


@protocol DCImage
@property (nonatomic,readonly) NSData * PNGRepresentation; 
@required
+(id)imageWithCGImage:(CGImageRef)arg1;
+(id)imageWithData:(id)arg1;
+(id)imageWithContentsOfFile:(id)arg1;
+(id)imageNamed:(id)arg1 inBundle:(id)arg2 compatibleWithTraitCollection:(id)arg3;
+(id)imageNamed:(id)arg1;
+(id)imageWithData:(id)arg1 scale:(double)arg2;
+(id)imageWithCIImage:(id)arg1;
+(id)imageWithCGImage:(CGImageRef)arg1 scale:(double)arg2;
-(void)drawAtPoint:(CGPoint)arg1;
-(NSData *)PNGRepresentation;

@end
