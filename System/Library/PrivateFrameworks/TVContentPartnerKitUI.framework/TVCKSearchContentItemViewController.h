/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:18 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVContentPartnerKitUI/TVCKSearchAppViewController.h>

@class TVCKSearchSiriContext, TVSSContentItem;

@interface TVCKSearchContentItemViewController : TVCKSearchAppViewController {

	TVCKSearchSiriContext* _siriContext;
	BOOL _userDriven;
	BOOL _playTrailer;
	TVSSContentItem* _contentItem;

}

@property (nonatomic,retain) TVSSContentItem * contentItem;              //@synthesize contentItem=_contentItem - In the implementation block
@property (assign,nonatomic) BOOL userDriven;                            //@synthesize userDriven=_userDriven - In the implementation block
@property (assign,nonatomic) BOOL playTrailer;                           //@synthesize playTrailer=_playTrailer - In the implementation block
-(id)_launchOptions;
-(void)setContentItem:(TVSSContentItem *)arg1 ;
-(TVSSContentItem *)contentItem;
-(BOOL)playTrailer;
-(void)setPlayTrailer:(BOOL)arg1 ;
-(BOOL)userDriven;
-(void)setUserDriven:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)siriContext;
-(id)initWithContentItem:(id)arg1 userDriven:(BOOL)arg2 playTrailer:(BOOL)arg3 ;
@end

