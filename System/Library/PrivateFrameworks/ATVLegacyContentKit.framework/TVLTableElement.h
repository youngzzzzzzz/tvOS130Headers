/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLElement.h>

@class NSArray;

@interface TVLTableElement : TVLElement {

	NSArray* _columnDefinitions;
	NSArray* _rows;

}

@property (nonatomic,retain) NSArray * columnDefinitions;              //@synthesize columnDefinitions=_columnDefinitions - In the implementation block
@property (nonatomic,retain) NSArray * rows;                           //@synthesize rows=_rows - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSArray *)columnDefinitions;
-(NSArray *)rows;
-(void)setRows:(NSArray *)arg1 ;
-(id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2 ;
-(void)setColumnDefinitions:(NSArray *)arg1 ;
@end
