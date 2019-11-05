/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:05 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol WFDetailsProviderContext <WFProviderContext>
@property (nonatomic,readonly) NSArray * recommendations; 
@property (assign) BOOL diagnosable; 
@property (assign,nonatomic) BOOL autoJoinEnabled; 
@property (assign,nonatomic) BOOL autoLoginEnabled; 
@property (assign,nonatomic) BOOL isInSaveDataMode; 
@property (getter=isCurrent,nonatomic,readonly) BOOL current; 
@property (getter=isKnownNetwork,nonatomic,readonly) BOOL knownNetwork; 
@required
-(void)forget;
-(BOOL)isCurrent;
-(void)join;
-(void)manage;
-(BOOL)diagnosable;
-(void)setDiagnosable:(BOOL)arg1;
-(BOOL)autoJoinEnabled;
-(void)setAutoJoinEnabled:(BOOL)arg1;
-(BOOL)autoLoginEnabled;
-(void)setAutoLoginEnabled:(BOOL)arg1;
-(BOOL)isInSaveDataMode;
-(void)setIsInSaveDataMode:(BOOL)arg1;
-(id)diagnosticsContext;
-(void)openRecommendationLink;
-(void)renewLease;
-(NSArray *)recommendations;
-(BOOL)isKnownNetwork;

@end
