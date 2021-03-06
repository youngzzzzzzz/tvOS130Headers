/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:34 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/FlexCloudSongAsset.h>

@class MAAsset;

@interface FlexMobileAssetV2SongAsset : FlexCloudSongAsset {

	MAAsset* _mobileAsset;

}

@property (readonly) MAAsset * mobileAsset;              //@synthesize mobileAsset=_mobileAsset - In the implementation block
-(MAAsset *)mobileAsset;
-(unsigned long long)assetStatus;
-(BOOL)contentUpdateAvaliable;
-(id)_metadataForAssetWithNewestContentVersion;
-(long long)contentVersionForAssetLocation:(unsigned long long)arg1 ;
-(id)initWithAssetID:(id)arg1 asset:(id)arg2 localURL:(id)arg3 cloudManager:(id)arg4 contentVersion:(long long)arg5 compatibilityVersion:(long long)arg6 ;
-(long long)compatibilityVersionForAssetLocation:(unsigned long long)arg1 ;
@end

