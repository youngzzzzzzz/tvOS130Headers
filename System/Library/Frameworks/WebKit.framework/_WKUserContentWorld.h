/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:51:06 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WKObject.h>

@class NSString;

@interface _WKUserContentWorld : NSObject <WKObject> {

	ObjectStorage<API::UserContentWorld> _userContentWorld;

}

@property (nonatomic,copy,readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
+(id)worldWithName:(id)arg1 ;
+(id)normalWorld;
-(NSString *)name;
-(void)dealloc;
-(Object*)_apiObject;
@end

