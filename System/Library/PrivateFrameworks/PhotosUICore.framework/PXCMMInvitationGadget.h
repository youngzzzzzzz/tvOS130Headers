/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXChangeObserver.h>
#import <PhotosUICore/PXCMMInvitationViewDelegate.h>
#import <PhotosUICore/PXGadget.h>

@protocol PXCMMInvitation, PXGadgetDelegate, PXCMMWorkflowPresenting, PXCMMInvitationGadgetDelegate;
@class PXCMMInvitationViewModel, PXCMMInvitationView, PXGadgetSpec, NSManagedObjectID, PXMomentShareStatusPresentation, NSString;

@interface PXCMMInvitationGadget : NSObject <PXChangeObserver, PXCMMInvitationViewDelegate, PXGadget> {

	id<PXCMMInvitation> _invitation;
	BOOL _didLoadInvitation;
	PXCMMInvitationViewModel* _invitationViewModel;
	PXCMMInvitationView* _invitationView;
	CGSize _requestedPosterImageSize;
	double _requestedWidth;
	BOOL _didRequestCachingOfPosterImage;
	PXGadgetSpec* _gadgetSpec;
	id<PXGadgetDelegate> _delegate;
	id<PXCMMWorkflowPresenting> _workflowPresenter;
	NSManagedObjectID* _objectID;
	id<PXCMMInvitationGadgetDelegate> _invitationGadgetDelegate;
	PXMomentShareStatusPresentation* _momentShareStatusPresentation;

}

@property (nonatomic,retain) PXMomentShareStatusPresentation * momentShareStatusPresentation;                //@synthesize momentShareStatusPresentation=_momentShareStatusPresentation - In the implementation block
@property (nonatomic,readonly) id<PXCMMWorkflowPresenting> workflowPresenter;                                //@synthesize workflowPresenter=_workflowPresenter - In the implementation block
@property (nonatomic,retain) NSManagedObjectID * objectID;                                                   //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,retain) id<PXCMMInvitation> invitation; 
@property (assign,nonatomic,__weak) id<PXCMMInvitationGadgetDelegate> invitationGadgetDelegate;              //@synthesize invitationGadgetDelegate=_invitationGadgetDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long gadgetType; 
@property (nonatomic,retain) PXGadgetSpec * gadgetSpec;                                                      //@synthesize gadgetSpec=_gadgetSpec - In the implementation block
@property (assign,nonatomic,__weak) id<PXGadgetDelegate> delegate;                                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL hasContentToDisplay; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) unsigned long long accessoryButtonType; 
@property (nonatomic,readonly) NSString * accessoryButtonTitle; 
@property (nonatomic,readonly) unsigned long long headerStyle; 
@property (assign,nonatomic) long long priority; 
@property (nonatomic,readonly) BOOL supportsHighlighting; 
@property (nonatomic,readonly) BOOL supportsSelection; 
@property (nonatomic,readonly) BOOL supportsAssetsDrop; 
@property (nonatomic,readonly) Class collectionViewItemClass; 
@property (assign,nonatomic) CGRect visibleContentRect; 
+(id)_imageRequestOptions;
+(id)sharedUserInitiatedQueue;
-(id)init;
-(id<PXGadgetDelegate>)delegate;
-(void)setDelegate:(id<PXGadgetDelegate>)arg1 ;
-(NSManagedObjectID *)objectID;
-(void)setObjectID:(NSManagedObjectID *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<PXCMMInvitation>)invitation;
-(void)setInvitation:(id<PXCMMInvitation>)arg1 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(unsigned long long)gadgetType;
-(NSObject*)previewViewControllerAtLocation:(CGPoint)arg1 fromSourceView:(NSObject*)arg2 ;
-(void)commitPreviewViewController:(id)arg1 ;
-(void)prepareCollectionViewItem:(UICollectionViewCell*)arg1 ;
-(id)uniqueGadgetIdentifier;
-(void)contentHasBeenSeen;
-(void)prefetchDuringScrollingForWidth:(double)arg1 ;
-(NSObject*)targetPreviewViewForLocation:(CGPoint)arg1 inCoordinateSpace:(id)arg2 ;
-(BOOL)supportsHighlighting;
-(Class)collectionViewItemClass;
-(PXGadgetSpec *)gadgetSpec;
-(void)setGadgetSpec:(PXGadgetSpec *)arg1 ;
-(BOOL)hasContentToDisplay;
-(id<PXCMMWorkflowPresenting>)workflowPresenter;
-(void)invitationViewSizeThatFitsDidChange:(id)arg1 ;
-(void)presentDetailViewForInvitationView:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithWorkflowPresenter:(id)arg1 ;
-(void)presentDetailViewAnimated:(BOOL)arg1 ;
-(void)_loadInvitationIfNecessary;
-(void)_lastExitedForYouDateDidChange:(id)arg1 ;
-(void)_registerMomentShareStatusPresentation;
-(void)_updateTitle:(id)arg1 ;
-(void)_updateStatusString:(id)arg1 ;
-(void)_updateExpirationTitle:(id)arg1 ;
-(void)setMomentShareStatusPresentation:(PXMomentShareStatusPresentation *)arg1 ;
-(void)_presentDetailViewAnimated:(BOOL)arg1 ;
-(void)_cachePosterImageWithWidth:(double)arg1 ;
-(void)_clearPosterImageCache;
-(id<PXCMMInvitationGadgetDelegate>)invitationGadgetDelegate;
-(void)setInvitationGadgetDelegate:(id<PXCMMInvitationGadgetDelegate>)arg1 ;
-(PXMomentShareStatusPresentation *)momentShareStatusPresentation;
@end
