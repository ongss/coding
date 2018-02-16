package physic;

import javafx.application.Platform;
import javafx.event.EventHandler;
import javafx.scene.input.KeyCode;
import javafx.scene.input.KeyEvent;

public class GameLogic {
	private static final int FPS = 60;
	private static final long LOOP_TIME = 1000000000 / FPS;

	private GameDisplay gameDisplay;
	private boolean isGameRunning;
	
	private boolean upState;
	private boolean downState;
	private boolean leftState;
	private boolean rightState;
	
	public GameLogic(GameDisplay gameDisplay){
		this.gameDisplay = gameDisplay;
		isGameRunning = false;
	}

	public void startGame() {
		this.isGameRunning = true;
		// TODO: tell canvas to prepare something
		new Thread(this::gameLoop, "Game Loop Thread").start();
		
	}

	public void stopGame() {
		this.isGameRunning = false;
	}
	
	private void gameLoop() {
		long lastLoopStartTime = System.nanoTime();
		while (isGameRunning) {
			long elapsedTime = System.nanoTime() - lastLoopStartTime;
			if (elapsedTime >= LOOP_TIME) {
				lastLoopStartTime += LOOP_TIME;
				
				updateGame(elapsedTime);
			}

			try {
				Thread.sleep(1);
			} catch (InterruptedException e) {
				e.printStackTrace();
			}
		}
	}

	private void updateGame(long elapsedTime) {
		// TODO fill code
		addKeyEventHandler();
		playerMove();
		model.player.fictionForce();
		model.arena.update();
	}
	
	private void playerMove() {
		if(upState && rightState) {
			model.player.turnTo("upRight");
			model.player.walk("upRight");
		}
		else if(downState && rightState) {
			model.player.turnTo("downRight");
			model.player.walk("downRight");
		}
		else if(upState && leftState) {
			model.player.turnTo("upLeft");
			model.player.walk("upLeft");
		}
		else if(downState && leftState) {
			model.player.turnTo("downLeft");
			model.player.walk("downLeft");
		}
		else if(upState) {
			model.player.turnTo("up");
			model.player.walk("up");
		}
		else if(downState) {
			model.player.turnTo("down");
			model.player.walk("down");
		}
		else if(rightState) {
			model.player.turnTo("right");
			model.player.walk("right");
		}
		else if(leftState) {
			model.player.turnTo("left");
			model.player.walk("left");
		}
		else {
			model.player.still();
		}
	}
	
	private void addKeyEventHandler() {
		//TODO Fill Code
		gameDisplay.setOnKeyPressed(new EventHandler<KeyEvent>() {
			public void handle(KeyEvent event) {
				if(event.getCode() == KeyCode.UP) {
					upState = true;
				}
				if(event.getCode() == KeyCode.DOWN) {
					downState = true;
				}
				if(event.getCode() == KeyCode.LEFT) {
					leftState = true;
				}
				if(event.getCode() == KeyCode.RIGHT) {
					rightState = true;
				}
				if(event.getCode() == KeyCode.ENTER) {
					
				}
				if(event.getCode() == KeyCode.W) {
					
				}
				if(event.getCode() == KeyCode.E) {
					
				}
				if(event.getCode() == KeyCode.R) {
				
				}
			}
		});
		
		gameDisplay.setOnKeyReleased(new EventHandler<KeyEvent>() {
			public void handle(KeyEvent event) {
				if(event.getCode() == KeyCode.UP) {
					upState = false;
				}
				if(event.getCode() == KeyCode.DOWN) {
					downState = false;
				}
				if(event.getCode() == KeyCode.LEFT) {
					leftState = false;
				}
				if(event.getCode() == KeyCode.RIGHT) {
					rightState = false;
				}
				if(event.getCode() == KeyCode.ENTER) {
					
				}
			}
		});
	}

}
