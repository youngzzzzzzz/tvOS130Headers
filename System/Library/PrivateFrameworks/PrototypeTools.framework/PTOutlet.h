/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:08 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PrototypeTools/PrototypeTools-Structs.h>
@class NSMutableDictionary;

@interface PTOutlet : NSObject {

	unsigned long long _nextToken;
	NSMutableDictionary* _actionsByToken;

}
-(id)_init;
-(NSNumber*)addAction:(/*^block*/id)arg1 ;
-(void)_invokeActions;
-(void)removeActionForToken:(NSNumber*)arg1 ;
@end

