/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSIndexPath;

@interface _UITableViewCellReuseParameters : NSObject {

	BOOL _didEndDisplaying;
	NSIndexPath* _indexPath;

}

@property (nonatomic,readonly) NSIndexPath * indexPath;              //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,readonly) BOOL didEndDisplaying;                //@synthesize didEndDisplaying=_didEndDisplaying - In the implementation block
-(NSIndexPath *)indexPath;
-(id)initWithIndexPath:(id)arg1 didEndDisplaying:(BOOL)arg2 ;
-(BOOL)didEndDisplaying;
@end
