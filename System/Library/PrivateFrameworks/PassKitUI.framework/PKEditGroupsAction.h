/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:10 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PKEditGroupsAction : NSObject {

	NSString* _actionLabel;
	NSString* _actionType;

}

@property (nonatomic,retain) NSString * actionLabel;              //@synthesize actionLabel=_actionLabel - In the implementation block
@property (nonatomic,retain) NSString * actionType;               //@synthesize actionType=_actionType - In the implementation block
-(void)setActionType:(NSString *)arg1 ;
-(NSString *)actionType;
-(NSString *)actionLabel;
-(void)setActionLabel:(NSString *)arg1 ;
-(id)initWithLabel:(id)arg1 type:(id)arg2 ;
@end
