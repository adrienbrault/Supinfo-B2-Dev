//
//  GridViewController.h
//  Supinfo-B2-Dev
//
//  Created by Adrien Brault on 30/04/11.
//  Copyright 2011 Adrien Brault. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#import "Grid.h"
#import "GridView.h"

@interface GridViewController : NSViewController <NSWindowDelegate> {
    
    GridView *_mapGridView;
    GridView *_territoryGridView;
    GridView *_buildingsGridView;
    
    Grid *_mapGrid;
    Grid *_territoryGrid;
    Grid *_buildingsGrid;
    
    int _gridWidth;
    int _gridHeight;
    int _gridTotalIndex;
    
    NSTrackingArea *_trackingArea;
    
    // Algorithm part
    char *_indexesStatus;
    BOOL *_indexesDone;
    NSMutableSet *_indexesToProcess;
}

@property (nonatomic, retain) IBOutlet GridView *mapGridView;
@property (nonatomic, retain) IBOutlet GridView *territoryGridView;
@property (nonatomic, retain) IBOutlet GridView *buildingsGridView;

@property (nonatomic, readonly) int gridWidth;
@property (nonatomic, readonly) int gridHeight;
@property (nonatomic, readonly) int gridTotalIndex;

- (void)setWidth:(int)width height:(int)height;

- (IBAction)testAlgo:(id)sender;

@end
