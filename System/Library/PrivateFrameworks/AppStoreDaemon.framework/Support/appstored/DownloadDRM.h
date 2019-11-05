/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, SinfsArray;

@interface DownloadDRM : NSObject {

	NSArray* _sinfs;
	BOOL _DRMFree;

}

@property (getter=isDRMFree,readonly) BOOL DRMFree;              //@synthesize DRMFree=_DRMFree - In the implementation block
@property (readonly) NSArray * sinfs;                            //@synthesize sinfs=_sinfs - In the implementation block
@property (readonly) SinfsArray * pinfsArray; 
@property (readonly) SinfsArray * sinfsArray; 
-(id)init;
-(NSArray *)sinfs;
-(BOOL)isDRMFree;
-(id)initWithSinfArray:(id)arg1 ;
-(id)_sinfsArrayWithDataKey:(id)arg1 ;
-(id)initWithSinfData:(id)arg1 ;
-(id)firstDataForSinfDataKey:(id)arg1 ;
-(SinfsArray *)pinfsArray;
-(id)sinfForIdentifier:(long long)arg1 ;
-(SinfsArray *)sinfsArray;
@end
