/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:08 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKPlaceSectionViewController.h>
#import <MapKit/MKStackingViewControllerFixedHeightAware.h>
#import <MapKit/MKInfoCardThemeListener.h>
#import <MapKit/_MKInfoCardChildViewControllerAnalyticsDelegate.h>
#import <MapKit/MKModuleViewControllerProtocol.h>

@protocol _MKInfoCardAnalyticsDelegate;
@class MKPlaceSectionHeaderView, NSArray, MKMapItem, NSTimeZone, NSString;

@interface MKPlaceHoursViewController : MKPlaceSectionViewController <MKStackingViewControllerFixedHeightAware, MKInfoCardThemeListener, _MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol> {

	BOOL _isExpanded;
	MKPlaceSectionHeaderView* _headerView;
	NSArray* _businessHours;
	BOOL _resizableViewsDisabled;
	id<_MKInfoCardAnalyticsDelegate> _analyticsDelegate;
	MKMapItem* _mapItem;

}

@property (nonatomic,retain) MKMapItem * mapItem;                                                    //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,readonly) NSTimeZone * timeZone; 
@property (nonatomic,readonly) NSArray * businessHours; 
@property (assign,nonatomic,__weak) id<_MKInfoCardAnalyticsDelegate> analyticsDelegate;              //@synthesize analyticsDelegate=_analyticsDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL resizableViewsDisabled;                                            //@synthesize resizableViewsDisabled=_resizableViewsDisabled - In the implementation block
+(id)placeHoursWithMapItem:(id)arg1 ;
-(NSTimeZone *)timeZone;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(MKMapItem *)mapItem;
-(NSArray *)businessHours;
-(id)initWithMapItem:(id)arg1 ;
-(id)titleString;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)_contentSizeDidChange;
-(BOOL)_canShowWhileLocked;
-(void)infoCardThemeChanged;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
-(BOOL)resizableViewsDisabled;
-(void)setResizableViewsDisabled:(BOOL)arg1 ;
-(void)_toggleShowAllHours;
-(void)_setExpanded:(BOOL)arg1 ;
-(void)_updateHoursAnimated:(BOOL)arg1 ;
-(BOOL)_shouldOnlyShowExpanded;
-(id<_MKInfoCardAnalyticsDelegate>)analyticsDelegate;
-(id)hoursBuilderWithHours:(id)arg1 ;
-(void)setAnalyticsDelegate:(id<_MKInfoCardAnalyticsDelegate>)arg1 ;
@end
