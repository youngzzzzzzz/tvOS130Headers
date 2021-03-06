/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADPDeviceDetail.h>

@class NSString;

@interface SADPHeadphone : SADPDeviceDetail

@property (assign,nonatomic) BOOL inOrOverEar; 
@property (nonatomic,copy) NSString * position; 
+(id)headphone;
+(id)headphoneWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)position;
-(void)setPosition:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)inOrOverEar;
-(void)setInOrOverEar:(BOOL)arg1 ;
@end

