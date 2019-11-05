/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:51:06 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/NSCopying.h>

@interface _WKTextInputContext : NSObject <NSCopying> {

	TextInputContext _textInputContext;

}

@property (nonatomic,readonly) CGRect boundingRect; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(CGRect)boundingRect;
-(const TextInputContext*)_textInputContext;
-(id)_initWithTextInputContext:(const TextInputContext*)arg1 ;
@end
