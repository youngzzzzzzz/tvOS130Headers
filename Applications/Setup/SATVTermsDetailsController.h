/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:56 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Setup/Setup-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class UITableView, NSString, SATVHeaderView, SATVLegalPresentation;

@interface SATVTermsDetailsController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

	UITableView* _tableView;
	long long _numberOfRows;
	NSString* _tvOSTerms;
	NSString* _warrantyTerms;
	NSString* _iCloudTerms;
	NSString* _gameCenterTerms;
	NSString* _parentalConsentTerms;
	SATVHeaderView* _bannerView;
	SATVLegalPresentation* _legalPresentation;

}

@property (nonatomic,retain) SATVHeaderView * bannerView;                            //@synthesize bannerView=_bannerView - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) SATVLegalPresentation * legalPresentation;              //@synthesize legalPresentation=_legalPresentation - In the implementation block
@property (nonatomic,readonly) CGSize sizeThatFits; 
@property (assign,nonatomic) long long numberOfRows;                                 //@synthesize numberOfRows=_numberOfRows - In the implementation block
@property (nonatomic,retain) NSString * tvOSTerms;                                   //@synthesize tvOSTerms=_tvOSTerms - In the implementation block
@property (nonatomic,retain) NSString * warrantyTerms;                               //@synthesize warrantyTerms=_warrantyTerms - In the implementation block
@property (nonatomic,retain) NSString * iCloudTerms;                                 //@synthesize iCloudTerms=_iCloudTerms - In the implementation block
@property (nonatomic,retain) NSString * gameCenterTerms;                             //@synthesize gameCenterTerms=_gameCenterTerms - In the implementation block
@property (nonatomic,retain) NSString * parentalConsentTerms;                        //@synthesize parentalConsentTerms=_parentalConsentTerms - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTableView:(UITableView *)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(long long)numberOfRows;
-(void)setNumberOfRows:(long long)arg1 ;
-(UITableView *)tableView;
-(void)viewDidLayoutSubviews;
-(id)preferredFocusEnvironments;
-(SATVHeaderView *)bannerView;
-(void)setBannerView:(SATVHeaderView *)arg1 ;
-(void)tableView:(id)arg1 didFocusRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didUnfocusRowAtIndexPath:(id)arg2 ;
-(NSString *)tvOSTerms;
-(NSString *)warrantyTerms;
-(NSString *)iCloudTerms;
-(NSString *)gameCenterTerms;
-(NSString *)parentalConsentTerms;
-(CGSize)sizeThatFits;
-(void)setTvOSTerms:(NSString *)arg1 ;
-(void)setWarrantyTerms:(NSString *)arg1 ;
-(void)setICloudTerms:(NSString *)arg1 ;
-(void)setGameCenterTerms:(NSString *)arg1 ;
-(void)setParentalConsentTerms:(NSString *)arg1 ;
-(SATVLegalPresentation *)legalPresentation;
-(void)setLegalPresentation:(SATVLegalPresentation *)arg1 ;
@end

