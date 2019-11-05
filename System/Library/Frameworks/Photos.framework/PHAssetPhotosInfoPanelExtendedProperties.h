/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHAssetPropertySet.h>

@class NSString, NSNumber;

@interface PHAssetPhotosInfoPanelExtendedProperties : PHAssetPropertySet {

	NSString* _cameraMake;
	NSString* _cameraModel;
	NSString* _lensModel;
	NSNumber* _flashFired;
	NSNumber* _whiteBalance;
	NSNumber* _meteringMode;
	NSNumber* _iso;
	NSNumber* _focalLength;
	NSNumber* _exposureBias;
	NSNumber* _aperture;
	NSNumber* _shutterSpeed;
	NSString* _codec;
	NSNumber* _fps;
	NSNumber* _duration;
	NSNumber* _sampleRate;
	NSNumber* _bitrate;
	NSNumber* _trackFormat;

}

@property (nonatomic,readonly) NSString * cameraMake;                //@synthesize cameraMake=_cameraMake - In the implementation block
@property (nonatomic,readonly) NSString * cameraModel;               //@synthesize cameraModel=_cameraModel - In the implementation block
@property (nonatomic,readonly) NSString * lensModel;                 //@synthesize lensModel=_lensModel - In the implementation block
@property (nonatomic,readonly) NSNumber * flashFired;                //@synthesize flashFired=_flashFired - In the implementation block
@property (nonatomic,readonly) NSNumber * whiteBalance;              //@synthesize whiteBalance=_whiteBalance - In the implementation block
@property (nonatomic,readonly) NSNumber * meteringMode;              //@synthesize meteringMode=_meteringMode - In the implementation block
@property (nonatomic,readonly) NSNumber * iso;                       //@synthesize iso=_iso - In the implementation block
@property (nonatomic,readonly) NSNumber * focalLength;               //@synthesize focalLength=_focalLength - In the implementation block
@property (nonatomic,readonly) NSNumber * exposureBias;              //@synthesize exposureBias=_exposureBias - In the implementation block
@property (nonatomic,readonly) NSNumber * aperture;                  //@synthesize aperture=_aperture - In the implementation block
@property (nonatomic,readonly) NSNumber * shutterSpeed;              //@synthesize shutterSpeed=_shutterSpeed - In the implementation block
@property (nonatomic,readonly) NSString * codec;                     //@synthesize codec=_codec - In the implementation block
@property (nonatomic,readonly) NSNumber * fps;                       //@synthesize fps=_fps - In the implementation block
@property (nonatomic,readonly) NSNumber * duration;                  //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) NSNumber * sampleRate;                //@synthesize sampleRate=_sampleRate - In the implementation block
@property (nonatomic,readonly) NSNumber * bitrate;                   //@synthesize bitrate=_bitrate - In the implementation block
@property (nonatomic,readonly) NSNumber * trackFormat;               //@synthesize trackFormat=_trackFormat - In the implementation block
+(id)entityName;
+(id)propertiesToFetch;
+(id)propertySetName;
+(id)keyPathFromPrimaryObject;
-(NSNumber *)duration;
-(NSString *)codec;
-(NSNumber *)focalLength;
-(NSNumber *)exposureBias;
-(NSNumber *)iso;
-(NSNumber *)sampleRate;
-(NSString *)lensModel;
-(NSNumber *)whiteBalance;
-(NSNumber *)aperture;
-(NSNumber *)meteringMode;
-(NSString *)cameraMake;
-(NSNumber *)fps;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
-(NSString *)cameraModel;
-(NSNumber *)flashFired;
-(NSNumber *)shutterSpeed;
-(NSNumber *)bitrate;
-(NSNumber *)trackFormat;
@end
