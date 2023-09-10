/*
  distancethreshold: Minimum cutoff for a gestures to take effect
  degreesleniency: Offset degrees within which gesture is recognized (max=45)
  timeoutms: Maximum duration for a gesture to take place in miliseconds
  orientation: Number of 90 degree turns to shift gestures by
  verbose: 1=enabled, 0=disabled; helpful for debugging
  device: Path to the /dev/ filesystem device events should be read from
  gestures: Array of gestures; binds num of fingers / gesturetypes to commands
            Supported gestures: SwipeLR, SwipeRL, SwipeDU, SwipeUD,
                                SwipeDLUR, SwipeURDL, SwipeDRUL, SwipeULDR
*/

unsigned int distancethreshold = 125;
unsigned int distancethreshold_pressed = 60;
unsigned int degreesleniency = 15;
unsigned int timeoutms = 800;
unsigned int orientation = 0;
unsigned int verbose = 0;
double edgesizeleft = 50.0;
double edgesizetop = 50.0;
double edgesizeright = 50.0;
double edgesizebottom = 50.0;
char *device = "/dev/input/event0";

//Gestures can also be specified interactively from the command line using -g
Gesture gestures[] = {
	/* nfingers  gesturetype  command */
/*	{ 1,         SwipeDRUL,   EdgeAny, DistanceAny, ActModeReleased, "sxmo_brightness.sh up" },
	{ 1,         SwipeULDR,   EdgeAny, DistanceAny, ActModeReleased, "sxmo_brightness.sh down" },
*/	{ 1,         SwipeLR,     EdgeAny, DistanceMedium, ActModeReleased, "hyprctl dispatch workspace m-1" },
	{ 2,         SwipeLR,     EdgeAny, DistanceMedium, ActModeReleased, "hyprctl dispatch movetoworkspace m-1" },
	{ 1,         SwipeRL,     EdgeAny, DistanceMedium, ActModeReleased, "hyprctl dispatch workspace r+1" },
	{ 2,         SwipeRL,     EdgeAny, DistanceMedium, ActModeReleased, "hyprctl dispatch movetoworkspace empty" },
	{ 1,         SwipeDU,     EdgeBottom, DistanceAny, ActModeReleased, "busctl call --user sm.puri.OSK0 /sm/puri/OSK0 sm.puri.OSK0 SetVisible b true" },
	{ 1,         SwipeUD,     EdgeBottom, DistanceAny, ActModeReleased, "busctl call --user sm.puri.OSK0 /sm/puri/OSK0 sm.puri.OSK0 SetVisible b false" },
	{ 1,         SwipeDRUL,   EdgeBottom, DistanceMedium, ActModeReleased, "hyprctl dispatch killactive" },
	{ 1,         SwipeUD,     EdgeTop, DistanceAny, ActModeReleased, "hyprctl dispatch workspace empty; hyprctl dispatch exec lcarsde-application-starter.py" },
};
