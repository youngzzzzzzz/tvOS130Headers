/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFActionProviderDelegate;
@interface WFActionProvider : NSObject {

	id<WFActionProviderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WFActionProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<WFActionProviderDelegate>)delegate;
-(void)setDelegate:(id<WFActionProviderDelegate>)arg1 ;
-(void)updateCache:(/*^block*/id)arg1 ;
-(void)deleteCache;
-(id)availableActionIdentifiers;
-(void)createActionsForRequests:(id)arg1 ;
-(id)createAllAvailableActions;
@end

