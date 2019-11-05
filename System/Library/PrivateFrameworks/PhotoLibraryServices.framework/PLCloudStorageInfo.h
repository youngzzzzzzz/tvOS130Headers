/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PLCloudStorageInfo : NSObject {

	BOOL _hasMaxQuotaTier;
	long long _totalBytes;
	long long _availableBytes;
	long long _usedBytes;
	long long _cameraRollBackupBytes;

}

@property (assign,nonatomic) long long totalBytes;                         //@synthesize totalBytes=_totalBytes - In the implementation block
@property (assign,nonatomic) long long availableBytes;                     //@synthesize availableBytes=_availableBytes - In the implementation block
@property (assign,nonatomic) long long usedBytes;                          //@synthesize usedBytes=_usedBytes - In the implementation block
@property (assign,nonatomic) long long cameraRollBackupBytes;              //@synthesize cameraRollBackupBytes=_cameraRollBackupBytes - In the implementation block
@property (assign,nonatomic) BOOL hasMaxQuotaTier;                         //@synthesize hasMaxQuotaTier=_hasMaxQuotaTier - In the implementation block
+(id)storageInfoWithTotal:(long long)arg1 available:(long long)arg2 used:(long long)arg3 cameraRollBackupBytes:(long long)arg4 hasMaxQuotaTier:(BOOL)arg5 ;
-(id)description;
-(long long)totalBytes;
-(void)setTotalBytes:(long long)arg1 ;
-(id)initWithTotalQuotaBytes:(long long)arg1 totalAvailableBytes:(long long)arg2 totalUsedBytes:(long long)arg3 cameraRollBackupBytes:(long long)arg4 hasMaxQuotaTier:(BOOL)arg5 ;
-(long long)availableBytes;
-(void)setAvailableBytes:(long long)arg1 ;
-(long long)usedBytes;
-(void)setUsedBytes:(long long)arg1 ;
-(long long)cameraRollBackupBytes;
-(void)setCameraRollBackupBytes:(long long)arg1 ;
-(BOOL)hasMaxQuotaTier;
-(void)setHasMaxQuotaTier:(BOOL)arg1 ;
@end
