/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:26 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _CRKCardSectionViewControllerRegistry;

@interface _CRKCardSectionViewControllerFactory : NSObject {

	_CRKCardSectionViewControllerRegistry* _registry;

}
+(id)_sharedInstance;
+(id)cardSectionViewControllerForCardSection:(id)arg1 ;
+(void)registerCardSectionViewControllerClass:(Class)arg1 ;
-(id)init;
-(id)_cardSectionViewControllerForCardSection:(id)arg1 ;
-(void)_registerCardSectionViewControllerClass:(Class)arg1 ;
@end

