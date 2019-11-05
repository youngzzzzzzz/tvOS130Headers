/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:43:05 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/Support/bookassetd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSError, BLFairplayDecryptSession, NSData, NSString, SSOperationProgress, BLBookInstallInfo;

@interface BLFairPlayDecryptFileOperation : NSOperation {

	BOOL _success;
	NSError* _error;
	BLFairplayDecryptSession* _fairplayDecryptSession;
	NSData* _dpInfo;
	double _lastSnapshotTime;
	NSString* _path;
	SSOperationProgress* _progress;
	BLBookInstallInfo* _installInfo;

}

@property (nonatomic,retain) BLFairplayDecryptSession * fairplayDecryptSession;              //@synthesize fairplayDecryptSession=_fairplayDecryptSession - In the implementation block
@property (nonatomic,retain) NSData * dpInfo;                                                //@synthesize dpInfo=_dpInfo - In the implementation block
@property (assign,nonatomic) double lastSnapshotTime;                                        //@synthesize lastSnapshotTime=_lastSnapshotTime - In the implementation block
@property (nonatomic,retain) NSString * path;                                                //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) SSOperationProgress * progress;                                 //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic,__weak) BLBookInstallInfo * installInfo;                         //@synthesize installInfo=_installInfo - In the implementation block
@property (nonatomic,readonly) BOOL success;                                                 //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) NSError * error;                                              //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(SSOperationProgress *)progress;
-(void)setProgress:(SSOperationProgress *)arg1 ;
-(void)main;
-(BOOL)success;
-(NSData *)dpInfo;
-(void)setDpInfo:(NSData *)arg1 ;
-(void)setInstallInfo:(BLBookInstallInfo *)arg1 ;
-(BLBookInstallInfo *)installInfo;
-(BOOL)_decryptWithSession:(id)arg1 error:(id*)arg2 ;
-(void)_initializeProgressWithFileHandle:(id)arg1 ;
-(void)_updateProgressWithByteCount:(long long)arg1 ;
-(id)initWithPath:(id)arg1 dpInfo:(id)arg2 installInfo:(id)arg3 ;
-(BLFairplayDecryptSession *)fairplayDecryptSession;
-(void)setFairplayDecryptSession:(BLFairplayDecryptSession *)arg1 ;
-(double)lastSnapshotTime;
-(void)setLastSnapshotTime:(double)arg1 ;
@end
