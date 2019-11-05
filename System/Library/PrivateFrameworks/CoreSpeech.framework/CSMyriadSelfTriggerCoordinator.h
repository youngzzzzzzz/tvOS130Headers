/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:17 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/CSSelfTriggerDetectorDelegate.h>

@protocol CSMyriadSelfTriggerCoordinatorDelegate;
@class NSString;

@interface CSMyriadSelfTriggerCoordinator : NSObject <CSSelfTriggerDetectorDelegate> {

	id<CSMyriadSelfTriggerCoordinatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CSMyriadSelfTriggerCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CSMyriadSelfTriggerCoordinatorDelegate>)delegate;
-(void)setDelegate:(id<CSMyriadSelfTriggerCoordinatorDelegate>)arg1 ;
-(void)selfTriggerDetector:(id)arg1 didDetectSelfTrigger:(id)arg2 ;
@end
