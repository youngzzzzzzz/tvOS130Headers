/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface CNStack : NSObject {

	NSMutableArray* _objects;

}

@property (nonatomic,readonly) id peek; 
@property (nonatomic,readonly) unsigned long long count; 
-(id)init;
-(unsigned long long)count;
-(void)removeObject:(id)arg1 ;
-(id)peek;
-(void)push:(id)arg1 ;
-(id)pop;
-(id)popAll;
-(void)popWithHandler:(/*^block*/id)arg1 ;
-(void)popAllWithHandler:(/*^block*/id)arg1 ;
@end

