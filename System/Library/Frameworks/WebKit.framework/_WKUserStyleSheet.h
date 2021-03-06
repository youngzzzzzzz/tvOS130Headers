/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:51:06 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WKObject.h>
#import <WebKit/NSCopying.h>

@class NSString, NSURL;

@interface _WKUserStyleSheet : NSObject <WKObject, NSCopying> {

	ObjectStorage<API::UserStyleSheet> _userStyleSheet;

}

@property (nonatomic,copy,readonly) NSString * source; 
@property (nonatomic,copy,readonly) NSURL * baseURL; 
@property (getter=isForMainFrameOnly,nonatomic,readonly) BOOL forMainFrameOnly; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(NSURL *)baseURL;
-(NSString *)source;
-(Object*)_apiObject;
-(BOOL)isForMainFrameOnly;
-(id)initWithSource:(id)arg1 forMainFrameOnly:(BOOL)arg2 ;
-(id)initWithSource:(id)arg1 forMainFrameOnly:(BOOL)arg2 legacyWhitelist:(id)arg3 legacyBlacklist:(id)arg4 userContentWorld:(id)arg5 ;
-(id)initWithSource:(id)arg1 forMainFrameOnly:(BOOL)arg2 legacyWhitelist:(id)arg3 legacyBlacklist:(id)arg4 baseURL:(id)arg5 userContentWorld:(id)arg6 ;
@end

