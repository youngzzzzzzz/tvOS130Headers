/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface SiriCoreErrorInfo : NSObject {

	BOOL _isPeerConnectionError;
	BOOL _isPeerNotNearbyError;
	NSError* _error;

}

@property (nonatomic,retain) NSError * error;                         //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL isPeerConnectionError;              //@synthesize isPeerConnectionError=_isPeerConnectionError - In the implementation block
@property (assign,nonatomic) BOOL isPeerNotNearbyError;               //@synthesize isPeerNotNearbyError=_isPeerNotNearbyError - In the implementation block
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(BOOL)isPeerConnectionError;
-(void)setIsPeerConnectionError:(BOOL)arg1 ;
-(BOOL)isPeerNotNearbyError;
-(void)setIsPeerNotNearbyError:(BOOL)arg1 ;
@end
