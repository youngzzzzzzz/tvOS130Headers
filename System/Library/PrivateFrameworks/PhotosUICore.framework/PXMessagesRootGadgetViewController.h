/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXGadgetUIViewController.h>

@class PXMessagesGadgetDataSourceManager;

@interface PXMessagesRootGadgetViewController : PXGadgetUIViewController {

	PXMessagesGadgetDataSourceManager* _messagesDataSourceManager;

}

@property (assign,nonatomic) double recentPhotosHeight; 
@property (nonatomic,readonly) PXMessagesGadgetDataSourceManager * messagesDataSourceManager;              //@synthesize messagesDataSourceManager=_messagesDataSourceManager - In the implementation block
+(Class)gadgetSpecClass;
-(void)viewDidLoad;
-(void)setRecentPhotosHeight:(double)arg1 ;
-(double)recentPhotosHeight;
-(id)initWithGadgetDataSourceManager:(id)arg1 ;
-(void)prepareForPresentationStyle:(long long)arg1 ;
-(PXMessagesGadgetDataSourceManager *)messagesDataSourceManager;
@end

