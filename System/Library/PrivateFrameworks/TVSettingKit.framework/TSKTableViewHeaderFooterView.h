/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVSettingKit.framework/TVSettingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewHeaderFooterView.h>
#import <TVSettingKit/TSKCellUpdating.h>

@class UIActivityIndicatorView, NSString;

@interface TSKTableViewHeaderFooterView : UITableViewHeaderFooterView <TSKCellUpdating> {

	UIActivityIndicatorView* _spinnerView;
	BOOL _showSpinner;

}

@property (assign,nonatomic) BOOL showSpinner;                      //@synthesize showSpinner=_showSpinner - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSubviews;
-(void)setShowSpinner:(BOOL)arg1 ;
-(BOOL)showSpinner;
-(void)settingItem:(id)arg1 didUpdateMetadataWithGroup:(id)arg2 ;
@end
