/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:15 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Frameworks/IMUIUtil.framework/IMUIUtil
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IMActionController, UIImage, NSString;

@interface IMAction : NSObject {

	BOOL _destructive;
	IMActionController* _controller;
	UIImage* _icon;
	NSString* _title;
	/*^block*/id _conditionBlock;
	/*^block*/id _actionBlock;
	/*^block*/id _buttonBlock;
	/*^block*/id _buttonItemBlock;

}

@property (assign,nonatomic,__weak) IMActionController * controller;              //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) UIImage * icon;                                      //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) NSString * title;                                    //@synthesize title=_title - In the implementation block
@property (assign,getter=isDestructive,nonatomic) BOOL destructive;               //@synthesize destructive=_destructive - In the implementation block
@property (nonatomic,copy) id conditionBlock;                                     //@synthesize conditionBlock=_conditionBlock - In the implementation block
@property (nonatomic,copy) id actionBlock;                                        //@synthesize actionBlock=_actionBlock - In the implementation block
@property (nonatomic,copy) id buttonBlock;                                        //@synthesize buttonBlock=_buttonBlock - In the implementation block
@property (nonatomic,copy) id buttonItemBlock;                                    //@synthesize buttonItemBlock=_buttonItemBlock - In the implementation block
-(BOOL)isAllowedForController:(id)arg1 ;
-(id)conditionBlock;
-(id)buttonBlock;
-(id)buttonItemBlock;
-(void)setButtonItemBlock:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(UIImage *)icon;
-(void)setIcon:(UIImage *)arg1 ;
-(void)setController:(IMActionController *)arg1 ;
-(void)setDestructive:(BOOL)arg1 ;
-(BOOL)isDestructive;
-(id)button;
-(IMActionController *)controller;
-(id)buttonItem;
-(void)setActionBlock:(id)arg1 ;
-(id)actionBlock;
-(void)buttonTapped:(id)arg1 ;
-(id)initWithTitle:(id)arg1 icon:(id)arg2 ;
-(void)setConditionBlock:(id)arg1 ;
-(void)setButtonBlock:(id)arg1 ;
@end
