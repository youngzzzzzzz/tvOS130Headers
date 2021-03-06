/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIInterfaceActionVisualStyle;


@protocol UIInterfaceActionGroupDisplaying <NSObject>
@property (nonatomic,readonly) UIInterfaceActionVisualStyle * visualStyle; 
@property (assign,nonatomic,__weak) id<UIInterfaceActionVisualStyleProviding> visualStyleProvider; 
@required
-(UIInterfaceActionVisualStyle *)visualStyle;
-(void)setVisualStyleProvider:(id)arg1;
-(void)reloadVisualStyle;
-(id)defaultVisualStyleForTraitCollection:(id)arg1 presentationStyle:(long long)arg2;
-(id<UIInterfaceActionVisualStyleProviding>)visualStyleProvider;

@end

