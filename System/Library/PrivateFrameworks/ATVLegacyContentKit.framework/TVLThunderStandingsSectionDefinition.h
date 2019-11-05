/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:10 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface TVLThunderStandingsSectionDefinition : NSObject {

	NSArray* _columnDefinitions;
	NSArray* _headerDefinitions;
	NSArray* _rows;

}

@property (nonatomic,retain) NSArray * columnDefinitions;              //@synthesize columnDefinitions=_columnDefinitions - In the implementation block
@property (nonatomic,retain) NSArray * headerDefinitions;              //@synthesize headerDefinitions=_headerDefinitions - In the implementation block
@property (nonatomic,retain) NSArray * rows;                           //@synthesize rows=_rows - In the implementation block
-(NSArray *)columnDefinitions;
-(NSArray *)rows;
-(void)setRows:(NSArray *)arg1 ;
-(void)setColumnDefinitions:(NSArray *)arg1 ;
-(NSArray *)headerDefinitions;
-(void)setHeaderDefinitions:(NSArray *)arg1 ;
@end
