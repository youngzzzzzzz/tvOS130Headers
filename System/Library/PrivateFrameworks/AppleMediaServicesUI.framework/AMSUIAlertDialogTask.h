/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:05 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <AppleMediaServices/AMSTask.h>

@class AMSDialogRequest, UIViewController;

@interface AMSUIAlertDialogTask : AMSTask {

	AMSDialogRequest* _request;
	UIViewController* _presentingViewController;

}

@property (nonatomic,readonly) AMSDialogRequest * request;                               //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
+(long long)_keyboardTypeFromType:(long long)arg1 ;
+(UITextField*)_convertTextField:(id)arg1 ;
-(AMSDialogRequest *)request;
-(id)present;
-(UIViewController *)presentingViewController;
-(id)initWithRequest:(id)arg1 presentingViewController:(UIViewController*)arg2 ;
-(id)_createIOSViewControllerFromRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
