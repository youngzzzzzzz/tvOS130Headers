/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WFTaskIdentifier, NSProgress;

@interface WFTask : NSObject {

	BOOL _requiresResponse;
	WFTaskIdentifier* _identifier;
	NSProgress* _progress;

}

@property (nonatomic,readonly) WFTaskIdentifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL requiresResponse;                      //@synthesize requiresResponse=_requiresResponse - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                        //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) BOOL isCancelled; 
+(id)sharedServiceConnection;
-(id)init;
-(WFTaskIdentifier *)identifier;
-(void)cancel;
-(void)start;
-(void)cleanup;
-(NSProgress *)progress;
-(BOOL)isCancelled;
-(void)setProgress:(NSProgress *)arg1 ;
-(BOOL)requiresResponse;
-(void)handleResponse:(id)arg1 ;
-(id)initWithResponseRequired:(BOOL)arg1 ;
-(void)startWithService:(id)arg1 ;
-(void)executeSynchronously;
-(void)handleCancellation;
@end

