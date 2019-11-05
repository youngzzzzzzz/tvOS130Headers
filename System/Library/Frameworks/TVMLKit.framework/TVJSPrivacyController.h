/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVJSPrivacyController.h>
@class NSDictionary;


@protocol TVJSPrivacyController <JSExport>
@property (nonatomic,readonly) NSDictionary * PrivacyIdentifiers; 
@required
-(BOOL)shouldDisplayPrivacyLink:(id)arg1;
-(void)acknowledgePrivacyLink:(id)arg1 :(id)arg2;
-(NSDictionary *)PrivacyIdentifiers;

@end


@class NSDictionary;

@interface TVJSPrivacyController : NSObject <TVJSPrivacyController>

@property (nonatomic,readonly) NSDictionary * PrivacyIdentifiers; 
+(void)configureJSContext:(id)arg1 ;
-(BOOL)shouldDisplayPrivacyLink:(id)arg1 ;
-(void)acknowledgePrivacyLink:(id)arg1 :(id)arg2 ;
-(NSDictionary *)PrivacyIdentifiers;
@end
