/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:16 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRecognition/CoreRecognition-Structs.h>
#import <CoreRecognition/CRCameraReaderOutput.h>

@class NSAttributedString;

@interface CRCameraReaderOutputCameraText : CRCameraReaderOutput

@property (copy) NSAttributedString * overlayString; 
@property (readonly) CGRect boundingBox; 
@property (readonly) float rotation; 
-(float)rotation;
-(void)setRotation:(float)arg1 ;
-(CGRect)boundingBox;
-(void)setBoundingBox:(CGRect)arg1 ;
-(NSAttributedString *)overlayString;
-(void)setOverlayString:(NSAttributedString *)arg1 ;
@end
