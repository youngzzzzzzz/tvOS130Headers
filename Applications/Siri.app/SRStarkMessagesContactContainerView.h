/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:55:31 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Siri.app/Siri
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class SRStarkGatekeeperContactView, NSNumber;

@interface SRStarkMessagesContactContainerView : UIView {

	SRStarkGatekeeperContactView* _contactView;
	NSNumber* _yOffset;

}

@property (assign,nonatomic) NSNumber * yOffset;                                                            //@synthesize yOffset=_yOffset - In the implementation block
@property (getter=_contactView,nonatomic,readonly) SRStarkGatekeeperContactView * contactView;              //@synthesize contactView=_contactView - In the implementation block
-(void)layoutSubviews;
-(id)initWithAceObject:(id)arg1 ;
-(BOOL)isEquivalentTo:(id)arg1 ;
-(NSNumber *)yOffset;
-(void)setYOffset:(NSNumber *)arg1 ;
-(void)setTextOffset:(double)arg1 ;
-(id)initWithRequestOptions:(id)arg1 ;
-(void)showContactView:(id)arg1 ;
-(void)_configureWithAceObject:(id)arg1 ;
-(id)_contactView;
-(void)updateWithAceObject:(id)arg1 ;
-(void)centerText;
@end
