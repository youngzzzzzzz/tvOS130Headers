/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:41 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <PhotosUICore/PXGadget.h>

@protocol PXGadgetDelegate;
@class UIView, UITextField, PXGadgetSpec, NSString;

@interface PXMessagesTextEntryGadget : UIViewController <PXGadget> {

	UIView* _containerView;
	UITextField* _textEntryField;
	long long _priority;
	id<PXGadgetDelegate> _delegate;
	PXGadgetSpec* _gadgetSpec;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long gadgetType; 
@property (nonatomic,retain) PXGadgetSpec * gadgetSpec;                             //@synthesize gadgetSpec=_gadgetSpec - In the implementation block
@property (assign,nonatomic,__weak) id<PXGadgetDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL hasContentToDisplay; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) unsigned long long accessoryButtonType; 
@property (nonatomic,readonly) NSString * accessoryButtonTitle; 
@property (nonatomic,readonly) unsigned long long headerStyle; 
@property (assign,nonatomic) long long priority;                                    //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) BOOL supportsHighlighting; 
@property (nonatomic,readonly) BOOL supportsSelection; 
@property (nonatomic,readonly) BOOL supportsAssetsDrop; 
@property (nonatomic,readonly) Class collectionViewItemClass; 
@property (assign,nonatomic) CGRect visibleContentRect; 
-(id<PXGadgetDelegate>)delegate;
-(void)setDelegate:(id<PXGadgetDelegate>)arg1 ;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(NSString *)localizedTitle;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(NSObject*)contentViewController;
-(unsigned long long)gadgetType;
-(BOOL)hasLoadedContentData;
-(void)userDidSelectAccessoryButton:(NSObject*)arg1 ;
-(unsigned long long)accessoryButtonType;
-(NSString *)accessoryButtonTitle;
-(unsigned long long)headerStyle;
-(PXGadgetSpec *)gadgetSpec;
-(void)setGadgetSpec:(PXGadgetSpec *)arg1 ;
-(BOOL)hasContentToDisplay;
-(void)_updateViewControllerInsets;
-(void)_simulateMessage:(id)arg1 ;
@end
