/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol INPersonHandleExport <NSObject,JSExport>
@property (nonatomic,copy) NSString * value; 
@property (assign,nonatomic) long long type; 
@property (nonatomic,copy) NSString * label; 
@required
-(id)init;
-(long long)type;
-(void)setType:(long long)arg1;
-(NSString *)value;
-(void)setValue:(id)arg1;
-(NSString *)label;
-(void)setLabel:(id)arg1;

@end

