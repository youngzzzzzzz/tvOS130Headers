/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVSettingKit.framework/TVSettingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSBundle, NSString;

@interface TSKBundleLoader : NSObject {

	NSBundle* _bundle;

}

@property (nonatomic,readonly) NSBundle * bundle;                           //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedTitle; 
+(id)loaderWithBundle:(id)arg1 ;
-(id)initWithBundle:(id)arg1 ;
-(NSBundle *)bundle;
-(NSString *)localizedTitle;
-(id)loadViewController;
@end
