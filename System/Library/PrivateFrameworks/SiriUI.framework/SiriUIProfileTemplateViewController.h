/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUIBaseTemplateViewController.h>
#import <SiriUI/SiriUILabelStackTemplateViewDelegate.h>

@class SiriUIProfileTemplateView, NSString;

@interface SiriUIProfileTemplateViewController : SiriUIBaseTemplateViewController <SiriUILabelStackTemplateViewDelegate>

@property (nonatomic,retain) id<SiriUIProfileTemplateModel> templateModel; 
@property (nonatomic,retain) SiriUIProfileTemplateView * view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadView;
-(Class)templateViewClass;
-(BOOL)labelStackTemplateViewShouldLayoutCompressed:(id)arg1 ;
@end
