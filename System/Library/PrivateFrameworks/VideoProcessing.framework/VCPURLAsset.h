/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPAsset.h>

@class NSURL, AVURLAsset, NSDictionary;

@interface VCPURLAsset : VCPAsset {

	NSURL* _imageURL;
	AVURLAsset* _movie;
	long long _mediaType;
	unsigned long long _mediaSubtypes;
	unsigned long long _pixelWidth;
	unsigned long long _pixelHeight;
	BOOL _onceExif;
	NSDictionary* _cachedExif;

}
+(id)imageAssetWithURL:(id)arg1 ;
+(id)livePhotoAssetWithImageURL:(id)arg1 andMovieURL:(id)arg2 ;
+(id)movieAssetWithURL:(id)arg1 ;
-(double)duration;
-(id)modificationDate;
-(long long)mediaType;
-(unsigned long long)pixelHeight;
-(unsigned long long)pixelWidth;
-(id)initWithImageURL:(id)arg1 ;
-(id)movie;
-(unsigned long long)mediaSubtypes;
-(id)mainFileURL;
-(id)exif;
-(CVBufferRef)imageWithPreferredDimension:(unsigned long long)arg1 ;
-(float)photoOffsetSeconds;
-(float)originalPhotoOffsetSeconds;
-(float)slowmoRate;
-(id)originalMovie;
-(id)initWithImageURL:(id)arg1 andMovieURL:(id)arg2 ;
-(id)initWithMovieURL:(id)arg1 ;
@end
