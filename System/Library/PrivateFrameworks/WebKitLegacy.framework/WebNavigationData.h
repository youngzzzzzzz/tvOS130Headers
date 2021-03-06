/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WebNavigationDataPrivate;

@interface WebNavigationData : NSObject {

	WebNavigationDataPrivate* _private;

}
-(void)dealloc;
-(id)response;
-(id)originalRequest;
-(id)url;
-(id)title;
-(id)initWithURLString:(id)arg1 title:(id)arg2 originalRequest:(id)arg3 response:(id)arg4 hasSubstituteData:(BOOL)arg5 clientRedirectSource:(id)arg6 ;
-(BOOL)hasSubstituteData;
-(id)clientRedirectSource;
@end

