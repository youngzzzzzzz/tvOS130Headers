/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PXSearchRecipientControllerDelegate;
@class PXRecipientSearchDataSourceManager, UIView;

@interface PXSearchRecipientController : NSObject {

	id<PXSearchRecipientControllerDelegate> _delegate;
	PXRecipientSearchDataSourceManager* _searchDataSourceManager;
	UIView* _searchResultsView;

}

@property (assign,nonatomic,__weak) id<PXSearchRecipientControllerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) PXRecipientSearchDataSourceManager * searchDataSourceManager;              //@synthesize searchDataSourceManager=_searchDataSourceManager - In the implementation block
@property (nonatomic,readonly) UIView * searchResultsView;                                                //@synthesize searchResultsView=_searchResultsView - In the implementation block
-(id<PXSearchRecipientControllerDelegate>)delegate;
-(void)setDelegate:(id<PXSearchRecipientControllerDelegate>)arg1 ;
-(PXRecipientSearchDataSourceManager *)searchDataSourceManager;
-(UIView *)searchResultsView;
@end
